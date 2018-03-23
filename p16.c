#include <stdio.h>

int main(void) 
{
	int N,m,j,num,min;
	int array[100];
	scanf("%d",&N);
	for(m=0;m<N;m++)
	{
		scanf("%d ",&array[m]);
	}
	for(m=0;m<N;m++)
	{
		int count=0;
		for(j=0;j<N;j++)
		{
			if(array[m]==array[j] && m!=j )
			{
				count=count+1;	
			}
			
		}
	if(count==0)
	{
		printf("%d",array[m]);
	}
	}

	
	
	return 0;
}
