#include<stdio.h>
int main()
{
int n,count=0;
printf("enter the n values");
scanf("%d",&n);
if(n!==0)
{
n=n/10;
count++;
}
printf("%d",count);
return 0;
}
