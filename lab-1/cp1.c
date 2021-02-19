#include<sys/types.h>
#include<sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#dene BUFFERSIZE 4096
#dene COPYMODE 0644
struct stat statbuf;
void oops(char*, char*);
int main(int ac, char*av[])
{
int in_fd, out_fd, n_chars;
char buf[BUFFERSIZE];
char fileName[2][30]; //arrays to store file names
/*check args */
if (ac != 3)
{
fprintf(stderr, "usage: %s source destination\n", *av);
exit(1);
}
/*open files */
strcpy(fileName[0],av[1]);//storing value of input fileName
strcpy(fileName[1],av[2]);//storing value of output fileName
if ((in_fd = open(fileName[0], O_RDONLY, 777)) == -1)
oops("Cannot open ", fileName[0]);
stat(fileName[1], &statbuf);
if (S_ISDIR(statbuf.st_mode) != 0)
{
char *p = "/";
strcat(fileName[1], p);
strcat(fileName[1], fileName[0]);
}
if ((out_fd = open(fileName[1], O_WRONLY | O_CREAT, 777)) == -1)
oops("Cannot creat", fileName[1]);
/*copy files */
while ((n_chars = read(in_fd, buf, BUFFERSIZE)) > 0)
if (write(out_fd, buf, n_chars) != n_chars)
oops("Write error to ", fileName[1]);
if (n_chars == -1)
oops("Read error from ", fileName[0]);
/*close files */
if (close(in_fd) == -1 || close(out_fd) == -1)
oops("Error closing files", "");
return 0;
}
void oops(char *s1, char *s2)
{
fprintf(stderr, "Error: %s ", s1);
perror(s2);
exit(1);
}