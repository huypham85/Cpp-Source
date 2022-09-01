#include<stdio.h>

int main(){
	int i, j, n, dem=0;
	scanf("%d", &n);
	int a[n+1], tanso[10001]={0};
	for(i=1;i<=n; i++)
		scanf("%d", &a[i]);
	for(i=1;i<=n; i++)
		tanso[a[i]]++;
	for(i=1;i<=n; i++){
		if(tanso[i]!=0)
			dem++;
	}
	printf("%d\n", dem);
	for(i=0; i<=10000; i++){
		if(tanso[i]!=0){
			printf("%d %d\n", i, tanso[i]);
		}
	}	
	return 0;
}

