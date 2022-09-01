#include<stdio.h>

int main(){
	long long a, b, tong, hieu, tich;
	scanf("%lld%lld", &a, &b);
	tong=a+b;
	hieu=a-b;
	tich=a*b;
	printf("%lld", tong);
	printf("\n%lld", hieu);
	printf("\n%lld", tich);
	

	return 0;
}

