#include<stdio.h>

int main(){
	int i, n, dd=0;
	scanf("%d", &n);
	int a[n+1];
	for(i=1; i<=n; i++)
		scanf("%d", &a[i]);
	i=1;
	while(i<=n){
		if(a[i]==a[i+1]){
			dd++;
			i++;
		}
		else	i++;	
	}
		printf("%d", dd);
	return 0;
}

