#include<stdio.h>
int square(int);
int main(){
int n;
square(n);
}
int square(int n){
int sq;
printf("enter the number");
scanf("%d",&n);
sq=n*n;
printf("sq= %d",sq);
return sq;
}
