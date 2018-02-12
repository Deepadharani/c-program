#include<stdio.h>
int main()
{
int i,n,t1=0,t2=1,nextterm;
printf("enter the number of terms:");
scanf("%d",&n);
printf("fibonaci series..");
for(i=1;i<n;++i)
{
printf("%d",t1);
nextterm=t1+t2;
t1=t2;
t2=nextterm;
}
return 0;
}
