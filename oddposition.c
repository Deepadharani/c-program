#include<stdio.h>
int main()
{
char str[20];
int n;
printf("enter  the string:");
scanf("%s",&str);
n=strlen(str);
for(i=0;i<n;i++)
{
if(i%2==0)
{
printf("%s",str[i]);
}
}
printf(" ");
for(i=0;i<n;i++)
{
if(i%2==1)
{
printf("%s",str[i]);
}
}
return 0;
}
