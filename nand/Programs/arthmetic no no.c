#include<stdio.h>
void sum();
void sub();
void mul();
void div();
void main()
{
 sum();
sub();
 mul();
  div();
}
void sum(){
int a=10,b=5,sum;
sum=a+b;
printf("sum= %d\n",sum);
}
void sub(){
int a=10,b=5,sub;
sub=a-b;
printf("sub= %d\n",sub);
}
void mul(){
int a=10,b=5,mul;
mul=a*b;
printf("mul\= %d\n",mul);
}
void div(){
int a=10,b=5,div;
div=a/b;
printf("div = %d\n",div);
}
