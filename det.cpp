#include<stdio.h>

int main(){
	long long i, j, det=0;
	long long a[4][4];
	for(i=1; i<=3; i++){
		for(j=1; j<=3; j++)
			scanf("%lld", &a[i][j]);
	}
	det=a[1][1]*(a[2][2]*a[3][3]-a[2][3]*a[3][2])-a[2][1]*(a[1][2]*a[3][3]-a[1][3]*a[3][2])+a[3][1]*(a[1][2]*a[2][3]-a[1][3]*a[2][2]);
	printf("%lld",det);
	return 0;
}

