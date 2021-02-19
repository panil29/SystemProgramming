#include <stdio.h>
#include <string.h>
int main () 
{
char str[100];
const char ch = '.';
char *ret;
printf("Enter the Filename: ");
scanf("%s",&str);
ret = strchr(str, ch);
printf("Suffix Of The Entered File: %s", ret+1);
return(0);
}
