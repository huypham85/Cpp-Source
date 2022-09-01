#include<stdio.h>

int main(){
	long long i, n, gt;
    scanf("%d", &n);
    gt=1;
    for(i=1; i<=n; i++){
    	gt*=i;}
    	//if(gt%10==0){
    		printf("%d", gt);
		
	
	return 0;
}

