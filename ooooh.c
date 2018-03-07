#include<stdio.h>
int main()
{
int a,b,c,i;
printf("enter the numbers:");
scanf("%d%d",&a,&b);
for(i=0;i<=4;i++)
{
if(i%2==0)
{
printf("%d\n",(a/b));
}
else
{
printf("%d\n",(a%b));
}
return 0;
}
