#include<stdio.h>
int main()
{
int n,rem,result;
printf("enter no");
scanf("%d",&n);
while(n!=0)
{
rem=n%2;
result=result+rem*rem*rem;
n=n/2;
