#include<stdio.h>
int fun(int,int);
int main()
{
    int a ,b;
printf("enter a and b");
scanf("%d %d",&a,&b);
printf("%d",fun(a,b));

}
int fun(int a,int b)
{
    return ((a+b)>=10&&(a+b)<=20)?30:a+b;
}

