#include<stdio.h>
void sum(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);
void main()
{
    int a=10,b=5;
 sum(a,b);
sub(a,b);
 mul(a,b);
  div(a,b);
}
void sum(int a,int b){
int sum;
sum=a+b;
printf("sum= %d\n",sum);
}
void sub(int a,int b){
int sub;
sub=a-b;
printf("sub= %d\n",sub);
}
void mul(int a,int b){
int mul;
mul=a*b;
printf("mul= %d\n",mul);
}
void div(int a, int b){
int div;
div=a/b;
printf("div=%d\n",div);
}
