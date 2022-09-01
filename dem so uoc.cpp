#include<stdio.h>
int main(){
	int i, n,k, a[1000000001];
	scanf("%d", &n);
	k=1;
	int dem=0;
	for(i=1; i<=(int)n/2; i++){
		if(n%i==0){
			a[k]=i;
			k++;
			dem++;
		}
	}
	a[dem+1]=n;
	for(k=1; k<=dem+1; k++)
		printf("%d", a[k]);
    return 0;	
}

