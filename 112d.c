#include<stdio.h>
int main()
{
int a,b,i;
int m[5]={1,2,3,4,5};
printf("Enter 2 numbers");
scanf("%d%d",&a,&b);
for(i=0;i<=5;i++)
{
if(b==a[i])
printf("yes %d is present");
else
printf("no");
}
return 0;
}
