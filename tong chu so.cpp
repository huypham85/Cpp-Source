#include<stdio.h>

int main(){
	long long n,i, tong=0;
	scanf("%lld", &n);
	while(n>0){
		i=n%10;
		tong+=i;
		n/=10;
	}
	printf("%lld",tong);	

	return 0;
}

