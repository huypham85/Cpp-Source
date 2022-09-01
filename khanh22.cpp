#include<stdio.h>
#include<math.h>
int main()
{
	long long n;
	scanf("%lld",&n);
	long long i,j;
	long long dd=0;
	long long x=sqrt(n);
	long long c;
	for(i=1;i<=sqrt(n);i++);
	{
		
		if(n%i==0)
		{
			dd=dd+2;
			j=i;
			if(x*x==n)
			{
			 dd++;
			}
			c=dd;
		}
		
		
	long long ok=1;
	long long k;
	for(k=2;k<=sqrt(j);k++)
	{
		
		if(j%k==0)
		{
			ok=0;
	
			break;
			c--;
			
		}
	  
	 
	}
	
	 if(ok==1)
	   {
	   	printf("%lld",c);
	   }
	   else
	   {
	   	printf("%lld",c);
	   }
	}
	 
		
		
		
}

