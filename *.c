#include<stdio.h>
int main()
{
int n,x,i;
char s[100];
gets(s);
n=strlen(s);
x=n/2;
s[x]='*';
puts(s);
}
