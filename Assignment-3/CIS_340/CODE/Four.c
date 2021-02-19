//cp1.c file handling
//Standard cp will through the error source and destination are the same file and will terminate the application.
// cp1.c handle above issue and when source and destination les are same, it prompt the user to pass the value again. Please nd the C code for the same.
#include <stdio.h>
#include <stdlib.h> // For exit()
int main()
{
FILE *fptr1, *fptr2;
char readFileName[100], writeFileName[100], c;
printf("Enter the filename to open for reading \n");
scanf("%s", readFileName);
printf("Enter the filename to open for writing \n");
scanf("%s", writeFileName);
int sameFile = 1;
while(sameFile==1){
if(strcmp (readFileName,writeFileName)==0){
printf("source and destination file are same please enter details again\n");
printf("Enter the filename to open for reading \n");
scanf("%s", readFileName);
printf("Enter the flename to open for writing \n");
scanf("%s", writeFileName);
}
else
{
sameFile=0;
}
}
// Open one file for reading
fptr1 = fopen(readFileName, "r");
if (fptr1 == NULL)
{
printf("Cannot open file %s \n", readFileName);
exit(0);
}
// Open another file for writing
fptr2 = fopen(writeFileName, "w");
if (fptr2 == NULL)
{
printf("Cannot open file %s \n", writeFileName);
exit(0);
}
// Read contents from file
c = fgetc(fptr1);
while (c != EOF)
{
fputc(c, fptr2);
c = fgetc(fptr1);
}
printf("\nContents copied to %s", writeFileName);
fclose(fptr1);
fclose(fptr2);
return 0;
}
