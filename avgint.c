#include<stdio.h>
int main()
{
int n,a[100],i,g=0;
float avg;
printf("enter n number:");
scanf("%d",&n);
printf("\n enter number");
{
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
g=g+a[i];
avg=g/n;
printf(" avg num %f",avg);
}
return 0;
}
