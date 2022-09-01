#include<stdio.h>

int main(){
	int i,n,k;
	scanf("%d%d", &n, &k);
	k=k%n;
	int a[n+1], b[n+1];
	for(i=1; i<=n; i++)
		scanf("%d", &a[i]);
	int j=1;
	for(i=k+1; i<=n; i++){
		b[j]=a[i];
		j++;
	}
	i=1;
	for(;j<=n;j++ ){
		b[j]=a[i];
		i++;
	}
	for(j=1; j<=n; j++)
		printf("%d ", b[j]);

	return 0;
}

