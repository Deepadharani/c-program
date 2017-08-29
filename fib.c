#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,c=-1,i,n;
printf("enter the value of n");
scanf("%d",&n);
for(i=0,i<n,i++)
{
if(i<=1)
{
c=i;
else
{
c=a+b;
a=b;
b=c;
}
printf("%d",c);
}
