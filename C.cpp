#include<stdio.h>

int main(){
	long long i, n, S=0,P=0;
	scanf("%lld", &n);
	for(i=1; i<=n; i++){
		P=P+i;
		S=S+P;
	}
	printf("%lld", S);
	
	

	return 0;
}

