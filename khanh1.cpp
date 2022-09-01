#include<stdio.h>
int main()
{
	int n;
	int i;
	int sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2)
	{
		sum+=i;
		
	}
	 printf("%d ",sum);
}

