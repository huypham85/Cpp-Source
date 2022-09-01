#include<stdio.h>

int main(){
	long long i, n, tanso[100001]={0};
	scanf("%lld", &n);
	long long a[n+1];
	for(i=0; i<n; i++){
		scanf("%lld", &a[i]);
	}
	for(i=0; i<n; i++){
		tanso[a[i]]+=1;	
	}
	for(i=0;i<n;i++){
		if(tanso[a[i]]>0){
		printf("%lld %lld\n",a[i] , tanso[a[i]]);
		tanso[a[i]]=0;
		}
	}
	return 0;
}

