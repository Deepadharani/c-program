#include<stdio.h>
int main()
{
int n,rem,pro;
printf("enter the number:");
scanf("%d",&n);
while(n!=0)
{
rem=n%1;
pro=pro*rem;
n=n/10;
}
printf("%d",pro);
return 0;
}
