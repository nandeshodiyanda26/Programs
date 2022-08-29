#include<stdio.h>
int fun(int);
int main()
{
int n;

printf("%d",fun(n));

}
int fun(int n)
{
 printf("enter the number");
    scanf("%d",&n);
return (n%3==0||n%7==0);

}

