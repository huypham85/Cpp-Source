#include<stdio.h>

int main(){
	double  x, n, i,s=0,t ,gt =1;
	scanf("%lf%lf", &x, &n);
	t=1;
	for(i=1; i<=n; i++){
		t*=x;
		gt*=i;
		s+=t/gt;
	}
	printf("%lf", s);

	return 0;
}

