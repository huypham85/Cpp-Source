#include<stdio.h>

int main(){
	int i,j, n;
	scanf("%d", &n);
	int a[n+1], b[n+1], c[2*n+1];
	for(i=1; i<=n; i++)
		scanf("%d", &a[i]);
	for(j=1; j<=n; j++)
		scanf("%d", &b[j]);
	i=1;
	j=1;
	int k=1;
	while(i<=n && j<=n){
		if(a[i]>b[j]){
			c[k]=b[j];
			k++;
			j++;
		}
		else{
			c[k]=a[i];
			k++;
			i++;
		}
	}
	for(;i<=n; i++){
		c[k]=a[i];
		k++;}
	for(;j<=n; j++){
		c[k]=b[j];
		k++;}
	for(k=1; k<=(2*n); k++)
		printf("%d ", c[k]);
	return 0;
}

