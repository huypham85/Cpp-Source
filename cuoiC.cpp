#include<stdio.h>

int main(){
	long long i, n, k,j=1, a[100001]={0},dem=0;
	scanf("%lld%lld", &n, &k);
	for(i=1; i<=k; i++){
		a[j]=i;
		j++;
	}
	for(i=1; i<=k; i++){
		for(j=i; j<=k; j++){
			if(a[i]+a[j]==k && a[i]<=n && a[j]<=n){
				dem++;
			}
			else dem = dem;	
		}		
	}
	printf("%lld", dem);	
	return 0;
}
