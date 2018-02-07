#include<stdio.h>
#include<conoi.h>
int main()
{
int num=0,i,b[100],large,small,n;
printf("enter the total number:");
scanf("%d",&n);
printf("enter the number");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
large=small=b[0];
if(b[i]>large)
{
large=b[i];
printf("num %d",large);
}
else
{
small=b[i];
printf("num %d",small);
}
return 0;
}
