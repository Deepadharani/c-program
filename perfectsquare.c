#include <stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("enter the values:");
	scanf("%d%d",&a,&b);
	if(a==b)
	{
	c=pow(a,b);
	printf("yes");
	}
	else
	{
		printf("no");
	}
	
	return 0;

	

	
}
