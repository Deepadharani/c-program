#include <stdio.h>
int main(void) 
{
	int j,n,k,array[50],count=1;
	scanf("%d %d",&n,&k);
	for(j=0;j<n;j++)
	{
		scanf("%d",&array[j]);
	}
	for(j=0;j<n;j++)
	{
		if(array[j]%2==1)
		{
			if(count==k)
			{
				printf("%d",array[j]);
			}
		count=count+1;
		}
	}
			
	return 0;
}
