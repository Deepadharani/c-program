#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,temp=0;
printf("enter the poitive interger:");
scanf("%d",&n);
for(j=2;j<=n/2;j++)
{
if(i%j==0)
{
temp=1;
break;
}
}
if(temp==0)
{
printf("%d",is prime number:);
}
else
{
printf("%d",not a prime number:");
}return 0;
}
