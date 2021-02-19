// search string in the file

#include "stdio.h"
void readFileAndPrint(char file[100]) //read the file
{
printf("Loading the file %s\n",file);
FILE *in_file = fopen(file, "rw"); //open means load the file matches
if(in_file == NULL){
printf("Error file is missing\n");
return ;
}
char userInput[100];
printf("Enter string : ");
scanf("%s",userInput);
char reader[100];
printf("Strings starting with %s are as displayed\n",userInput);
while(fscanf(in_file,"%s",reader)==1){
unsigned i=0;
int same = 1;
for(i=0;i<strlen(userInput);i++){
if(userInput[i]!=reader[i]){
same = 0;
break;
}
}
if(same==1)
printf("%s\n",reader);
}
}
int main()
{
readFileAndPrint("pavuluru.txt");// Enter the file name pavuluru 
return 0;
}
