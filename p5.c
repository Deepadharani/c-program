#include<stdio.h>
int main()
{
int t=0,n,m,i;
char rom[9];
scanf("%s",rom)
m=strlen(rom);
for(i=0;i<m;i++)
{
switch(rom[i])
{
case 'I':rom[i]=1;
break;
case 'v':rom[i]=5;
break;
}
for(i=0;i<m;i+2)
{
if(rom[i]<rom[i+1)
{
n=rom[i+1]-rom[i];
}
else
{
n=rom[i+1}+room[i];
}
t=n+t;
}
printf("%d",t);
}
return 0;
}
