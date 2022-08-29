#include<stdio.h>
int main()
{
    int *ptr1,*ptr2,sum;
    int a=100,b=50;
    ptr1=&a;
    ptr2=&b;
    sum=*ptr1+*ptr2;
    printf("%d\n",sum);

}
