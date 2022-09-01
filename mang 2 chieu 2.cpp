#include<stdio.h>

int main(){
	int i, j, m, n;
	scanf("%d%d", &n, &m);
	int a[n+1][m+1];
	for(i=1; i<=n; i++){
		for(j=1; j<=m; j++)
			scanf("%d",&a[i][j]);
	}
	for(i=1; i<=n; i++){
		for(j=1; j<=m; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

