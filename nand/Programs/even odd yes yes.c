#include<stdio.h>
int evod(int);
int main(){
int n;
evod(n);
}
int evod(int n){
int a;
printf("enter the number");
scanf("%d",&n);
if(n%2==0){

a=printf("even");
}
else{

    a=printf("odd");
}

return a;
}
