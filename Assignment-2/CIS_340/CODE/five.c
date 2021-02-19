// Three digit non-neagtive number
#include<stdio.h>
int main()
{
 
char n[10];
int x;
printf("Enter a three-digit nonnegative number: ");
scanf("%s", n);
 
x = 100*(n[0] - '0') + 10*(n[1] - '0') + (n[2] - '0');

printf("The number is %d\n", x);
 
return 0;

}