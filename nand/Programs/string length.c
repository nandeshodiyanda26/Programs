#include<stdio.h>
void main()
{
char a[]="abcde";
int count=0,i=0;
while(a[i]!=NULL)
{
    count++;
i++;
}


printf("length of string is %d",count);

//printf("%s",a); //a[i]
}

