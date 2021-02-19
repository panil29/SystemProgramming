#include<stdio.h>
#include<math.h>
int main(){
int n;
printf("Enter positive integer: ");
scanf("%d", &n);
int root=floor(sqrt(n));
int lower_square = root*root;
int upper_square = (root+1)*(root+1);
if(n-lower_square<upper_square-n)
printf("nearest number: %d\n", lower_square);
else
printf("nearest number: %d\n", upper_square);
return 0;
}
