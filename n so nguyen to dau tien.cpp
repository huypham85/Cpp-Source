#include<stdio.h>
#include<math.h>
int main(){
	int n,count=0,i=2;
	scanf("%d", &n);
	while(count<n){
		int	j,dd=1;
		for(j=2; j<=(int)sqrt(i); j++){
			if(i%j==0){
			dd=0;
			break;
			}
		}
		if(dd==1){
			printf("%d ", i);
			count++;
		}
		i++;
	}
			
	return 0;
}

