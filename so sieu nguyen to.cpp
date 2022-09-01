#include<stdio.h>
#include<math.h>
int main(){
	int i,n,j,e;
	scanf("%d", &n);
	for(i=2; i<=n; i++){
		e=i;
		int dd = 1;
		while(e){
			if(e==1)	{
				dd=0;break;
				}
			for(j=2; j<=(int)sqrt(e); j++){
				if(e%j==0){
					dd=0;
					break;
				}
			}
			if(dd==1){
				e=e/10;
			}
			if(dd==0) 
				break;
		}
		if(dd==1)
		printf("%d ", i);
	}
	if(n<=1)
	printf("-1");
	return 0;
}

