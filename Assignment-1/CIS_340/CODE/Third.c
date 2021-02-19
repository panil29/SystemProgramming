#include <stdio.h>
int main()

{

//To store the number

long int num;

int sum=0; // To store sum

printf("Enter a number: ");

scanf("%ld",&num);

//While number is not zero

while(num!=0){

sum+=num%10;

num=num/10;

}

//displaying sum

printf("The sum of the digits is: %d",sum);

return 0;

}