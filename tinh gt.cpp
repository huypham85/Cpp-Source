#include<stdio.h>

int main(){
	long long i,n,s=1;
	scanf("%lld", &n);
	for(i=1; i<=n; i++)
		s*=i;
		printf("%lld", s);
			
	return 0;
}

