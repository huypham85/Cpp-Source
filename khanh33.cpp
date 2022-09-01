#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<2*i;j++)
		{
			
			if(j>1&&j<2*i)
			{
				printf("  ");
			}
			else
			{
				printf("*");
			}
			if(i==n)
			{
				printf("*");
			}
		}
		
			printf("\n");
	}

}
