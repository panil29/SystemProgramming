#include<stdio.h>
#include<sys/stat.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
struct stat fileinfo;
int i,binary[33],n;
if(argc!=2)
{
printf("Usage: statfile filename\n");
exit(0);
}
i=stat(argv[1],&fileinfo);
if(i==-1)
{
printf("Unable to stat %s\n",argv[1]);
exit(0);
}
n=fileinfo.st_mode;
i=0;
while(n>0)
{
binary[i]=n%2;
n=n/2;
i++;
}
printf("size: %ld\n",fileinfo.st_size);
printf("permissions:");
n=i;
for(i=n-10;i<n;i++)
  printf("%d",binary[i]);
printf("\n");
printf("last modied: %ld\n",fileinfo.st_mtime);
return 0;
}
