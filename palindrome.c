#include<stdio.h>
#include<string.h>
int main()
{
char a[10],b[10];
printf("enter the string a:");
scanf("%d",&a);
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0)
{
printf("is palindrome");
else
{
printf("not a palindrome");
}
}
}
