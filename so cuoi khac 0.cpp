#include<stdio.h>

int main(){
	long long i ,n,gt=1;;
	scanf("%lld", &n);
	for(i=1; i<=n; i++){
		gt*=i;
		while(gt%10==0){
			gt/=10;
		}
		while(gt/10!=0)
			gt=gt%10;
		if(gt/10==0)
			printf("%lld", gt);
	}
	return 0;
}

