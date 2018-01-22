#include<stdio.h>
int main()
{
int n,k,i,n1;
printf("enter the value for n and k:");
scanf(%d,%d,&n,&k);
if(n>k)
{
n1=n;
}
else
{
n1=k;
}
for(i=1;i>=2;i--)
{
if(n%i==0 && k%i==0)
{
printf("%d",i);
break;
}
}
return 0;
}

