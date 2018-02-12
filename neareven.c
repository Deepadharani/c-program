#include<stdio.h>
int main()
{
int n;
printf("enter the number:");
scanf("%d",&n);
if(n%2==0)
{
printf("n is %d",n);
}
else
{
n=n-1;
printf("near number is %d",n);
}
return 0;
}
