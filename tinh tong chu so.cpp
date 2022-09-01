#include<stdio.h>

int main(){
	int n, tong;
	tong=0;
	scanf("%d", &n);
	while(n){
			tong+=n%10;
			n/=10;}
	printf("%d", tong);

	return 0;
}

