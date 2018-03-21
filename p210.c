#include<stdio.h>
int main
{
int n,k,i,c=1;
printf("enter the values:");
scanf("%d%d",&n,&k);
for(i=0;i<k;i++)
{
c=c*k;
}
printf("%d",c);
return 0;
}
