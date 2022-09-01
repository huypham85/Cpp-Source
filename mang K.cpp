#include<stdio.h>

int main(){
	int i, n, m, k=1;
	scanf("%d%d", &n, &m);
	int a[n+1], b[m+1], c[k+1];
	for(i=1; i<=n; i++)
		scanf("%d", &a[i]);
	for(j=1; j<=m; j++)
		scanf("%d", &b[j]);
	for(i=1; i<=n; i++){
		int dem=0;
		for(j=1; j<=m; j++){
			if(a[i]!=a[j]){
				dem++;
				if(dem==m){
					a[i]=c[k];
					k++;
				}
				else
		}
			
	return 0;
}

