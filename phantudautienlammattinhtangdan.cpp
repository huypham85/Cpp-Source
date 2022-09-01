#include<stdio.h>

int main(){
	int i,n,m=1;
	scanf("%d", &n);
	int a[n+1];
	for(i=1; i<=n;i++)
		scanf("%d", &a[i]);
	for(i=1;i<=n;i++){
		if(a[i]>a[i+1]){
			printf("NO %d", i);
			m=0;
			break;
		}
	}
	if(m==1)	printf("YES");		
	return 0;
}

