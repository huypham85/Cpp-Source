#include<stdio.h>
#include<math.h>
int main(){
	int a, b,i,n,dem=0;
	scanf("%d%d", &a, &b);
	for(i=a+1; i<b; i++){
		for(n=1; n<=(int)sqrt(i); n++){
			if(n*n==i)
				dem++;
			
		}
	}
	printf("%d", dem);		
		

	return 0;
}

