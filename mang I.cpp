#include<stdio.h>

int main(){
	int i, n;
	scanf("%d", &n);
	int a[n+1];
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}
	int x;
	scanf("%d", &x);
	if(x>a[n]) a[n+1]=x;
	else{
		i=n+1;
		while(a[i-1]>x && i>0){
			a[i]=a[i-1];
			--i;
		}		
	}
	if(i==0)
		a[i+1]=x;
	else
		a[i]=x;
	for(i=1; i<=n+1; i++)
		printf("%d ", a[i]);
	return 0;
}

