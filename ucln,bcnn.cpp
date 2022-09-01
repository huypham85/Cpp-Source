#include<stdio.h>

int main(){
	long long a, b,  n;
	scanf("%lld%lld", &a, &b);
	long long m=a*b;
	while(a!=b){
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
	n=m/a;
	printf("%lld %lld", a, n);
	return 0;
}

