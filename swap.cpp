#include<stdio.h>
int a, b;
void nhap(){
	scanf("%d%d", &a, &b);
}
void swap(int &a, int &b){
	int tmp;
	tmp=a;
	a=b;
	b=tmp;
}
int main(){
	nhap();
	swap(a,b);
	printf("%d %d", a, b);
	return 0;
}

