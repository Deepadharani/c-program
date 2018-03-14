#inclide<stdio.h>
int main(void)
{
char str[20];
int i,n,len;
scanf(%s %d",&str,&n);
len=strlen(str);
for(i=0;i<=len;i++)
{
printf("%c",str[i]);
}
return 0;
}

