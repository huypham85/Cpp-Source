#include<stdio.h>

int main(){
	long long a,b,m;
	scanf("%lld%lld", &a, &b);
	m=a*b;
	while(a!=b){
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
	printf("%lld", m/a);
	return 0;
}

