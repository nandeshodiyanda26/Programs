#include<stdio.h>
void main(){
int a,b,sum=0;
printf("enter the values for a and b : ");
scanf("%d %d",&a,&b);
if(a==b){
sum=(a+b)*3;
printf("%d\n",sum);
}
else{
printf("numbers are not equal");
}

}
