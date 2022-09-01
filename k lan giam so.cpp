#include<stdio.h>

int main(){
	int n,e, k, count=0;
	scanf("%d%d", n, k);
	n =e;
	while(count<=k){
		if(e%10==0){
			e=e/10;
			count++;}
		else
			e=e-1;
			count++;}
	}
	printf("%d", e);
	return 0;
}

