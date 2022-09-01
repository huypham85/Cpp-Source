#include<stdio.h>

int main(){
	long long a,n,dao=0,dv=0;
	scanf("%lld", &a);
	for(int i =1; i<=a; i++){
		int goc=0;
		dao=0,dv=0;
		scanf("%lld", &n);
		goc=n;
		while(goc>0){
			if(n<0){
			printf("NO");
			break;
			}
			dv=goc%10;
			dao=dao*10+dv;
			goc=goc/10;
		}
		if(dao==n)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

