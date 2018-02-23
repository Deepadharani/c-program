#include<stdio.h>
int main()
{
int i,j,temp=0;
printf("enter the positivie number");
scanf("%d",n);
for(j=2;j<n/2;j++)
{
if(i%j==0)
{
temp=1;
break;
}
}
if(temp==0)
{
printf("%d",it is prime number);
}
else
{
printf("%d",it is not prime);
}
return 0;
}
