#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the number:");
scanf("%d",&a);
printf("enter the l and r number:");
scanf("%d%d",&b,&c);
if(a>b&&a<c)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
