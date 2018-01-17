#include<stdio.h>
int main()
{
int i,j,n,m;
printf("enter the 1 and 2 number:");
scanf("%D,%d",&m,&n);
for(i=n;i<=m;i++)
{
if(i%2==0)
{
printf("%d",i);
}
else
{
continue;
}
}
}
