#include<stdio.h>
void main()
{
char a[]="abcde";
int i,n;
n=strlen(a);
printf("stringlength is %d\n",n);

for(i=0;i<n;i++)
{
    printf("%c  ",a[i]);
}



//printf("%s",a); //a[i]
}

