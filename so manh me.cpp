#include<stdio.h>
#include<math.h>
int main(){
	int a,i,j,b,dem=0,tong,e=0;
	scanf("%d%d", &a, &b);
	for(i=a+1; i<=b; i++){
		tong=0;
		e=i;
		while(e){
			tong+=e%10;
			e/=10;
		}
	int dd=0;
	for(j=2; j<=sqrt(tong); j++){
		if(tong%j==0)
			dd++;
	}
	if(dd==0) dem++;
	if(tong==1)	dem--;    
	}
				
	printf("%d", dem);
			
			

	return 0;
}

