#include<stdio.h>
void main(){
int a,b,c;
printf("enter the numbers");
scanf("%d %d",&a,&b);
if(a>b){
printf("a is greater");
}
else{
printf("b is greater");
}
//c=(a%5 == b%5 )? (a<b): (b<a);
if(a%5 == b%5){
    if(a<b){
        printf("\na");
    }
    else{
        printf("\nb");
    }
}

if(a==b){
printf("0");
}
}
