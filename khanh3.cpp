#include<stdio.h>
int main()
{
	int n;
	int i,j,a;
	scanf("%d%d",&n,&a);
	for(i=1;i<=(n);i++)
	{
		for(j=1;j<=a;j++)
		{
		    
			printf("*");
			a+=1;
			
		}
		printf("\n");                                     
	}
	
	
}

