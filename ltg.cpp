#include<stdio.h>

int main(){
	long long n, tong=0;
	scanf("%lld", &n);
	long long i=n;
	while(i){
		tong+=i%10;
		i=i/10;
	}
	if(n%tong==0) printf("YES");
	else printf("NO");
	return 0;
}

