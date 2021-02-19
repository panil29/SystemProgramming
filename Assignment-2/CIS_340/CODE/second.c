//Split the name into Firstname and Lastname

#include <stdio.h>
int main()
{
char name[50],rst[25],last[25];
printf("What is your name? ");
scanf("%s",name);
int i = 1;
int j = 1;
// determining the rst name
rst[0] = name[0];
while(1)
{
if (name[i] >= 'A' && name[i] <= 'Z')
break;
else
{
rst[j] = name[i];
j++;
}
i++;
}
rst[j] = '\0';
// determining the last name
last[0] = name[i];
j = 1;
int k;
for (k = i+1; name[k] != '\0'; ++k)
{
last[j] = name[k];
j++;
}
printf("First name: %s\n",rst);
printf("Last name: %s\n",last);
return 0;
}