#include<stdio.h>
int main()
{
int n,r,digit;
printf("enter the number");
scanff("*d",&n);
printf("%d",n);
while(n>0)
{
digit=n%10;
n=n/10;
r=digit%2;
if((r!=0)
{
printf("%d" '\n',digit);
}
return 0;
}
