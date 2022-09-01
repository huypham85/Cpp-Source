#include<stdio.h>

int main() {
	int i, n;
	float tich;
	tich=1;
	printf("nhap n= ");
	scanf("%d", &n);
	if(n<=0)
	  printf("n phai >0. nhap lai n!");
	else{
	  for(i=1; i<=n; i++){
         if(n%i==0){
		   if(i%2==1)
		   tich*=i;
		 }
	}
	printf("tich la %f", tich);
	}
	return 0;
}

