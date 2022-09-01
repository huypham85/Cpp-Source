#include<stdio.h>

int main(){
	int n, m, p,k,i,j,u,x;
	scanf("%d%d%d", &n, &m, &p);
	int a[n+1], b[m+1],c[n+m+2];
	for(i=1; i<=n; i++)
		scanf("%d", &a[i]);
	for(i=1; i<=m; i++)
		scanf("%d", &b[i]);
	for(k=1; k<p+1; k++)
		c[k]=a[k];
	for(i=p+1;i<p+1+m; i++)
		c[i]=b[i-p];
	for(i=p+1+m; i<=n+m; i++)
		c[i]=a[i-m];
	for(x=1; x<=n+m; x++)
		printf("%d ", c[x]);
	return 0;
}

