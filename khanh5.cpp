#include<stdio.h>
int main()
{
	int n;
	int i;
	scanf("%d",&n);
	int d=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			d+=1;
			printf("%d " ,i);
		}
	}
    printf("\n%d",d);
}
