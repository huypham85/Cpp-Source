#include<stdio.h>

int main(){
	int i,j, n,dem=0;
	scanf("%d%d", &n, &j);
	for(i=1; i<=n; i++){
		if(i%j==0){
		n+=1;}
		dem++;}
	printf("%d", dem);
		
		
	

	return 0;
}

