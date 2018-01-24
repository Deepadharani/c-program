#include<stdio.h>
#includ<conio.h>
void main()
{
int a[25],m,i;
float mean=0,sum=0;
printf("enter the number of terms:");
scanf("%d",&m);
printf("enter the number: \n");
for(i=1;i<=m;i++)
{
scanf("%d", &a[i]);
}
for(i=1;i<=m;i++)
{
sum=sum+a[i];
avg=sum/m;
}
printf("mean of entered number is %f",mean);
return 0;
}
