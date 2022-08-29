


#include<stdio.h>
int fun(int);
int main()
{
int n;
printf("%d",fun(n));

}
int fun(int n)
{
    int a,b;
 printf("enter the number");
    scanf("%d %d",&a,&b);
n=a+b;
if(n>10&&n<20)
{
    n=30;
}
else
{
    n=a+b;
}
return n;
}
