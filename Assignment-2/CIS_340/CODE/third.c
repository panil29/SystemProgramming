//Command Line Arguments tells the amtches indexs
#include<stdio.h> 
#include<string.h>
int main(int argc,char* argv[]) {
int counter1,counter2; // to run the loop
if(argc>=1) // if the command line argumnets are greater than one
{
for(counter1=0;counter1<argc;counter1++){//it iterates the comand line arguments
for(counter2=counter1+1;counter2<argc;counter2++){ //it also iterates the command line argumnets but greater than the previous position
if(strcmp(argv[counter1],argv[counter2])==0){//if the string is same then it returns the 0
printf("%s at %d and %d indexs\n",argv[counter1],counter1,counter2);//pritning the string which is occur in positions
}
}
}
}
return 0;
}
