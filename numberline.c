#include<stdio.h>
void main()
{
char a[1000]="hello world hai";
int i,c=0;
for(i=0;i<1000;i++)
{
if(a[i]=='.')
{
c++;
}
printf("%d",c+1);
return 0;
}
