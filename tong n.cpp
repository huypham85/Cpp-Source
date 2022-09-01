#include<stdio.h>

int main(){
	int i,j,u, n,s=0, t=0, w=0, tich;
	scanf("%d", &n);
	for(i=0; i<=n; i++){
		s+=i;
	}
	printf("%d", s);
	for(j=0; j<=n; j++){
		if(j%2==0)
			t+=j;
	}
	printf("\n%d", t);
	for(u=0; u<=n; u++){
		if(u%2==1)
			w+=u;
	}
	printf("\n%d", w);
	printf("\n%d", s+t+w);
	tich=s*t*w;
	printf("\n%d", s*t*w);
	if(tich>2712)
		printf("\nYES");
	else
		printf("\nNO");

	return 0;
}

