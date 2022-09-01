#include<stdio.h>

int main(){
	int m, n, a, b;
	scanf("%d%d", &m, &n);
	a=m%2;
	b=n%2;
	if(a==1&&b==1){
		if(m>n)
			printf("YES %d", 3+2*(n-1));
		else
			printf("YES %d", 3+2*(m-1));
	}
	if(a==1&&b!=1)
		printf("YES %d", 3+2*(m-1));
	if(b==1&&a!=1)
		printf("YES %d", 3+2*(n-1));
	if(a!=1&&b!=1)
		printf("NO");
	
	

	return 0;
}

