#include<stdio.h>
int main()
{
int a[20],i,j,swap,v;
scanf("%d",&v);
for(i=0;i<v;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<v;i++)
{
if(a[i]>a[j])
{
swap=a[i];
a[i]=a[j];
a[j]=swap;
}
}
for(i=0;i<v;i++)
{
printf("%d',a[i]);
}
}
