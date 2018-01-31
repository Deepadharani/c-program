#include<stdio.h>
#include<string.h>
void main()
{
char str[200]="ghraeyf675216";
int i,count=0;
for(i=0;str[i]!='\0';i++)
{
if(str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='@')
count ++;
}
printf("number of special character is %d",count);
}
