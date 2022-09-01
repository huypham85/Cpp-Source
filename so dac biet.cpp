#include<stdio.h>
#include<math.h>
int main(){
	int i,j,n,dd,tong,nt;
	dd=1;
	nt=1;
	tong=0;
	scanf("%d", &n);
	for(i=2; i<=(int)sqrt(n); i++){
		if(n%i==0){
			dd=0;
		printf("NO");
		break;
		}
	}
		if(dd==1){
			while(n){
			tong+=n%10;
			n/=10;}
			for(j=2; j<=(int)sqrt(tong); j++){
				if(tong%j==0){
					nt=0;
				printf("NO");
				}
			}
				if(nt==1)
				printf("\"YES");
			
		}
			

	return 0;
}

