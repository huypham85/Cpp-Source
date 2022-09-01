#include<stdio.h>

int main(){
	int i,j,n,m;
	scanf("%d%d", &n,&m);
	int a[n+1], b[m+1];
	for(i=1; i<=n; i++)
		scanf("%d", &a[i]);
	for(i=1; i<=n; i++)
		scanf("%d", &b[i]);
	for(i=1; i<=n-1; i++){
		for(j=n; j>i; j--){
			if(a[j]<a[j-1]){
				int tmp=a[j];
					a[j]=a[j-1];
					a[j-1]=tmp;
			}
		}
	}
	/*for(i=1; i<=n-1; i++){
		for(j=n; j>i; j--){
			if(b[j]<b[j-1]){
				int tmp=b[j];
					b[j]=b[j-1];
					b[j-1]=tmp;
			}
		}
	}*/
	for(i=1;i<=n;i++){
		int dem=0;
		for(j=1;j<=n;j++){
			if(a[i]!=b[j])
				dem++;
		}
		if(dem==n)
			printf("%d ", a[i]);
	}
	
	
	return 0;
}

