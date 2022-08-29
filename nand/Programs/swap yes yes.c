#include<stdio.h>
int swap(int,int);
int main(){
int a,b;
swap(a,b);
printf("%d %d",a,b);

}
int swap(int a,int b){
printf("enter the number");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
//printf("%d %d",a,b);
return (a,b);
}
