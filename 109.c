3include<stdio.h>
int main()
{
int n,i,a[10],min=90;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<=5;i++)
{
scanf("%d",a[i]);
}
for(i=0;i<=5;i++)
{
if(min>a[i])
{
min=a[i];
}
}
printf("mini no",min);
return 0;
}
