#include<stdio.h>

int main(){
	int i, n, count;
	count=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		if(n%i==0){
	    count++;}
		}
    printf("%d", count);
    
    return 0;
    
	
}

