#include <stdio.h>
int main(int argc, char* argv[])
{
char string[100];
int j;
printf("Enter string: ");
scanf("%s", string);
for (j = 0; string[j] != '\0'; j++)
{
     if (string[j] >= 'a' && string[j] <= 'z') 
{
     string[j] = string[j] - ('a' - 'A');
}
else 
{
     string[j] = string[j] + ('a' - 'A');
}

}

printf("The required resultant string: %s\n", string);
return 0;

}