#include<stdio.h>

int main(){
	long long i,j,s=0,n,k;
	scanf("%lld%lld", &n, &k);
	for(i=1; i<=n; i++){
		long long p=1;
		for(j=1; j<=k; j++){
			p=p*i;
		}
		s=s+p;
		
	}
	printf("%lld", s);
	return 0;
}

