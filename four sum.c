#include<stdio.h>
int main()
{
int i,n,a,b,c,d,sum;
printf("enter the n value");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the num");
scanf("%d%d%d%d",&a,&b,&c,&d);
sum=a+b+c+d;
printf("%d",sum);
}
return 0;
}
