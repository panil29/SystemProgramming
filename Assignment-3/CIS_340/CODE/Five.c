//Enter the string a count number of vowels and consonants
#include <string.h>
#include <stdio.h>
int main()
{
//Declaring variables
char str[1000],*ptr;
int cntVowels=0,cntConsonants=0;
//Getting input entered by the user
printf("Enter the string : ");
gets(str);
ptr=str;
//Finding no of vowels and consonants
while(*ptr)
{
if( (*ptr>=65 && *ptr<=90) || (*ptr>=97 && *ptr<=122))
{
if(*ptr=='a'|| *ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u'||*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O' ||*ptr=='U')
cntVowels++;
else
cntConsonants++;
}
ptr++;
}
//Displaying output
printf("Number of Vowels in a given string = %d\n",cntVowels);
printf("Number of Consonants in a given string = %d\n",cntConsonants);
return 0;
}
