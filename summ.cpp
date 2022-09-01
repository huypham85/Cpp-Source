#include<stdio.h>
int n;
int sum=0;
void nhap(){
	scanf("%d", &n);
}
int tong(){
	sum=n*(n+1)/2;
	return sum;
}
int main(){
	nhap();
	printf("%d", tong());
	return 0;
}

