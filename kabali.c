#include<stdio.h>
int main()
{
int i,n,opp,ninja;
printf("enter the sets:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d%d,&opp,&ninja);
if(opp>ninja)
{
printf("%d",opp-ninja);
}
else
{
printf("%d",ninja-opp);
}
}
return 0;
}
