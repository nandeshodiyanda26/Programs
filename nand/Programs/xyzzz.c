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

    return ((a+b)==5||(a-b)==5||a==5||b==5)?1:0;
}
