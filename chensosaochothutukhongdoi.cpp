#include<stdio.h>

int main(){
	int i,j,n,x;
	scanf("%d%d", &n, &x);
	int a[n+1],tanso[10001]={0};
	for(i=1;i<=n; i++){
		scanf("%d", &a[i]);
	}
	tanso[x]=1;
	for(i=1;i<=n;i++)
		tanso[a[i]]+=1;
	for(i=0; i<=10000;i++){
		for(j=1;j<=tanso[i];j++){
			printf("%d ", i);
		}
	}
	return 0;
}

