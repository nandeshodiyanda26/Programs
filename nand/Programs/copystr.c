#include<stdio.h>
void main(){
char c[3]="kle", g[3];
int i;
for(i=0;i<3;i++)
{
    g[i]=c[i];

}
g[i]='\0';
printf("%s",g);
}
