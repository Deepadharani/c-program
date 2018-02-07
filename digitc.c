#include<stdio.h>
int main()
{
int num,rem,count=0;
printf("enter the number:");
scanf("%d",num);
while(num>0)
{
num=num/10;
count++;
}
printf("number of digit is =%d",count);
return 0;
}


