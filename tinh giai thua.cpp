#include<stdio.h>

int main(){
	long long i ,n,gt=1;;
	scanf("%lld", &n);
	for(i=1; i<=n; i++){
		gt*=i;
	}
	printf("%lld", gt);
	return 0;
}

