//segmentation error correction in the code
#include<stdio.h>
#include<malloc.h>
void funct(int *p2)
{
*p2=14;
printf("%d\n",*p2);
}
int main()
{

int *p=(int *)malloc(4);
funct(p);
printf("%d\n",*p);
return 0;
}
//Because int * p is declared in main but not initialised.It is initialised locally in the funct when passed by reference.So p points to null.
//It has to be initialised before passing it by reference to the function funct. when value of a null pointer is printed then it will give segmentation fault error.
