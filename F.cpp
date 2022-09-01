#include<stdio.h>
long long giaiyhua(int n){
	int i;
	if(n==0||n==1){
		return 1;
	}
	else{
		for(i=1;i<n;i++){
			n*=i;
		}
	}
	return n*(n-1);
}
int main(){
	int n;
	scanf("%d", &n);
	/*for(i=1; i<=n; i++){
		p=p*i;
		s=s*p;
	}
	while(s%k==0){
		s=s/k;
		dem++;
	}
	printf("%lld", dem);*/
	printf("so:%lld",giaiyhua(n));
	return 0;
}

