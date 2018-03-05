#include<stdio.h>
#include<string.h>
int main()
{
int i,j=0,k=0;
char s[100];
gets(s1);
for(i=0;s1[i]!='\0';i++)
{
for(j=j+1;s1[j]!='\0';i++)
{
if(s1[i]==s1[j])
{
printf("not a isogram");
return 0;
}
}
printf("isogram");
}
