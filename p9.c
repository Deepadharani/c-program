#include <stdio.h>

int main(void) 
{
	int l,c,i,j,count=0,flag=1;
	scanf("%d",&l);
	scanf(" %d",&c);
	if(l==2)
	{
		count++;
	}
	for(i=l;i<=c;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=0;
				break;
				
			}
			
		}
			if(flag==1)
			{
				count=count+1;
			}
		
		
	}

	printf("\n%d",count);
	return 0;
}
