#include<stdio.h>

int main(){
	long long i, n, tich;
	scanf("%lld", &n);
	for(i=0; i<=30; i++){
		tich=n*i;
		printf("%lld x %lld = %lld\n", n, i, tich);
    }
	return 0;
}

