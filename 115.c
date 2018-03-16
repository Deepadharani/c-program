#include <stdio.h>
int main(void) 
{
	int j,n,k,array[50],temp;
	scanf("%d %d",&n,&k);
	for(j=0;j<n;j++)
	{
		scanf("%d",&array[j]);
	}
	for(j=1;j<=n;j++)
	{
		if(array[j]>array[j+1])
		{
			temp=array[j];
			array[j]=array[j+1];
			array[j+1]=temp;
		}
	}
	for(j=1;j<=n;j++)
	{
		if(j==k-1)
		{
			printf("%d",array[j]);
		}
	}
			
	return 0;
