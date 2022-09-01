#include<stdio.h>

int main(){
	int i, n, tong=0;
	scanf("%d", &n);
	int a[n+1];
	for(i=1; i<=n; i++)
		scanf("%d", &a[i]);
	for(i=1; i<=n; i++)
		tong+=a[i];
	printf("%d", tong);
	return 0;
}

