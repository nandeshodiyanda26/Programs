#include<stdio.h>
void square();
void main()
{
square();
}
void square(){
int n,sq;
printf("enter the number");
scanf("%d",&n);
sq=n*n;
printf("sq= %d",sq);
}
