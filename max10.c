#include<stdio.h>
void main()
{
int e[10];
int i;
i=greatest;
printf("enter the value:");
for(i=0;i<10;i++)
{
scanf("%d",&e[i]);
}
greatest=e[0];
for(i=0;i<10;i++)
{
if(e[i]>greatest)
{
greatest=e[i];
}
}
printf("greatest of ten number is %d",greatest);
return 0;
}
