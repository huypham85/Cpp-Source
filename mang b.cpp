#include<stdio.h>

int main(){
	int t,u=1;
	scanf("%d", &t);
	int b[t+1];
	while(u<=t){
		int x,k, n, i, s=0;
		scanf("%d%d%d", &x, &k ,&n);
		int a[n+1];
		for(i=1; i<=n; i++){
			scanf("%d", &a[i]);
		}
		for(i=1; i<=n; i++){
			s+=a[i];
		}
		s+=x;
		if(s>k) b[u]=1;
		else b[u]=0;
		
		u++;
	}
	for(u=1; u<=t; u++){
		if(b[u]==1)
			printf("YES\n");
		else if(b[u]==0)
			printf("NO\n");
	}
	return 0;
}

