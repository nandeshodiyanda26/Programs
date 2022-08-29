 #include<stdio.h>
 int main()
 {
     int m,n,o,i,j,k;
     printf("enter size of array size row and col");
     scanf("%d %d %d",&m,&n,&o);
 int a[m][n][o];
 printf("enter the e,lemeents");
 for(i=0;i<m;i++)
 {
for(j=0;j<n;j++)
{
    for(k=0;k<o;k++)
    {
        scanf("%d",&a[i][j][k]);
    }
}
 }
 for(i=0;i<m;i++)
 {
for(j=0;j<n;j++)
{
    for(k=0;k<o;k++)
    {
        printf("%d",a[i][j][k]);
    }
}
 }
 }
