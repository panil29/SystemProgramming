#include <stdio.h>
int isPrimeOr1(int n)
{
int i,count=0;
for(i=1;i<=n;i++)
{
if(n%i==0)
count++;
}
if(count==2||n==1)
return 1;
else
return 0;
}
int main()
{
int num,ct=0;
printf("%d\n",ct);
printf("Input? ");
scanf("%d",&num);
while(num!=0)
{
if(isPrimeOr1(num))
ct=ct+num;
printf("%d\n",ct);
printf("Input? ");
scanf("%d",&num);
}

return 0;
}
//The program inputs integer from user and checks if it is prime or not and after checking if it is prime or 1 then it adds the number to a which was initially zero. 
// It repeatedly asks from user for a number until user enter 0