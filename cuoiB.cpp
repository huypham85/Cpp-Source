#include<stdio.h>

int main(){
	long long i,j,n;
	scanf("%lld", &n);
	long long a[n+1], tanso[100001]={0};
	for(i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		tanso[a[i]]++;
	}
	for(i=1;i<=n;i++){
		printf("%lld %lld\n", a[i], tanso[a[i]]);		
	}
	return 0;
}

