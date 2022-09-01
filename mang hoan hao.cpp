#include<stdio.h>

int main(){
	int i,j,n;
	long long s=0,t=0;
	scanf("%d", &n);
	int a[n+1], d[100000]={0};
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}
	for(i=1; i<=n; i++){
		d[a[i]]+=1;			
	}
	for(i=1; i<=n;i++){
		if(d[i]==0){
			s=0;
			break;}
		else
			s+=a[i];			
	}
	for(j=1; j<=n; j++){
		t+=j;
	}
	if(s==t) printf("YES %lld", s);
	else if(s!=t) printf("NO");
	return 0;
}

