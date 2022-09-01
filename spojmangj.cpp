#include<stdio.h>

int main(){
	int i,j,k, n,dd=0;
	scanf("%d", &n);
	int a[n+1];
	for(i=1; i<=n; i++)
		scanf("%d", &a[i]);
	for(i=1; i<=n; i++){
		if(a[i]==a[i+1])
			dd++;
		else break;
	}
	for(i=1; i<=n-1; i++){
		for(j=n; j>i; j--){
			if(a[j]<a[j-1]){
				int tmp=a[j];
					a[j]=a[j-1];
					a[j-1]=tmp;
			}
		}
	}
	for(k=n-1; k>=1; k--){
		if(a[k]<a[n]){
			printf("%d", a[k]);
			break;
		}
	}
	if(dd==n-1) printf("Khong co so lon thu 2");		
	return 0;
}


