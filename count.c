#include<stdio.h>
int main()
{
long n;
int count=0;
printf(("enter the integer integer:");
scanf("d",&n);
while(n!=0)
{
n/=10;
++count;
}
printf("no. of count:%d",count);
}
