#include<stdio.h>
#include<string.h>
int main()
{
char a[10];
int i,n;
printf("enter the string");
scanf("%d",&a);
printf("enter the number to be display:");
scanf("%d",&n);
for(i=0;i<n;i++);
{
printf("%c",a[i]);
}
return 0;
}
