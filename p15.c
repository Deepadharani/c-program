#include <stdio.h>
 
int main(void) 
{
	char str[50],character;
	int m,j,count=1,max=1;
	scanf("%[^\n]s",str);
	for(m=0;str[m]!='\0';m++)
	{
		for(j=m+1;str[j]!='\0';j++)
		if(str[m]==str[j])
		{
			count=count+1;
			if(count>max)
			{
				max=count;
				character=str[m];
			}
		}
 
	}
	printf("\n%c",character);
	return 0;
