#include<stdio.h>
int main()
{
int i,flag=0,num;
printf("enter the num:");
scanf("%d",&num);
for(i=2;i<=num/2;i++)
{
if(num%i==0)
{
flag=1;
break;
}
}
if(flagg==0)
{
printf("no");
}
else
{
printf("yes");
}
return 0;
}
