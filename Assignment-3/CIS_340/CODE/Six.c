#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <utmp.h>
void utmpprint(struct utmp*log)
{
printf("\n ut_user: %s \n ut_type: %ld \n", log->ut_user, log->ut_type);
}
int main() 
{
int logsize = 10;
//FILE *file; //Working way
int file; //New way
struct utmp log[logsize];
int i = 0;
//file = fopen("/var/run/utmp", "rb"); //Working way
file = open("/var/run/utmp", O_RDONLY); //New way
if( file < 0 ) 
{ 
//New way
printf("Failed to open");
return(0);
}
if (file)
{
//fread(&log, sizeof(struct utmp), logsize, file); //Working way
read(file, &log, sizeof(log)); //New way
for(i = 0; i < logsize; i++) 
{
utmpprint(&log[i]);
}
close(file); //New way
} 
else 
{

return(0);
}

return(0);
}