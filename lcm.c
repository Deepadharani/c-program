#include<stdio.h>
int main()
{
int a,b,i,lcm,gcd;
scanf("%d%d",&a,&b);
for(i=1;i<=a &&i<=b;++i)
{
if(a%i==0 &&b%i==0)
gcd=i;
lcm=(a*a)/gcd;
}
printf("%d",lcm);
return 0;
}
