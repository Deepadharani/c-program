
#include <stdio.h>
int main(void) 
{
	int j,m,n,array[50],count=0;
	scanf("%d %d",&m,&n);
	for(j=0;j<m;j++)
	{
		scanf("%d",&array[j]);
	}
	for(j=0;j<m;j++)
	{
		if(array[j]==n)
		{
			count=count+1;
		}
	}
	printf("\n%d",count);
	return 0;
}
