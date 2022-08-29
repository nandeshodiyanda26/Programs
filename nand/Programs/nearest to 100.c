  #include<stdio.h>
void main()
{
int a,b,a1,b1;
printf("enter two number less than 100 \n");
scanf("%d %d",&a,&b);
a1=100-a;
b1=100-b;
if(a1>b1)
{
printf("%d is nearest",b);
}
else if(b1>a1)
{
printf("%d is nearest",a);
}
else{
    printf("0") ;
}
}
