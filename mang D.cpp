#include<stdio.h>

int main(){
	int n,i,k, dem=0;
	scanf("%d%d", &n, &k);
 
	int a[n+1];
	for(i=1; i<=n; i++){
	    if(k==0){
		dem=0;
		break;}
		scanf("%d", &a[i]);
		if(a[i]%k==0)
			dem++;
		else dem=dem;
	}
	printf("%d", dem);

	return 0;
}

