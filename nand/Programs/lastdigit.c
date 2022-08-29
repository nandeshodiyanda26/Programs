#include<stdio.h>
void main(){
int a,b;
printf("enter a and b");
scanf("%d %d",&a,&b);
if(a%10 == b%10){
printf("the last digit are same");
}
else{
    printf("not same");
}
}
