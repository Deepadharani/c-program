#include<stdio.h>
int main()
{
printf("enter the number:");
scanf("%d",&n);
do
{
n++;
}while(n%10!=0)
{
printf("%d",n");
}
return 0;
}
