#include<stdio.h>
int	n;
int a[1000];
void nhap(){
	for(int i=1; i<=n; i++){
	scanf("%d", &a[i]);
	}
}
void xuat(){
	for(int i=1; i<=n; i++){
	printf("%d ", a[i]);
	}
}

int main(){
	nhap();
	xuat();
	return 0;
}

