#include<stdio.h>

int main(){
	int i,j, n;
	scanf("%d", &n);
	int a[n+1], tanso[100000+1]={0};
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}
	for(i=1; i<=n; i++)
		tanso[a[i]]++;
	for(i=0; i<=100000; i++){
		for(j=1; j<=tanso[i]; j++)
			printf("%d ", i);
	}
	return 0;
}

