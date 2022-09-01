#include<stdio.h>

int main(){
	int n, tien;
	scanf("%d", &n);
	if(n<=30)
	  printf("0");
	else{
	  tien=(n-30)*2000;
	  printf("%d", tien);}
	

	return 0;
}

