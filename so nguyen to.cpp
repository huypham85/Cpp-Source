#include<stdio.h>
#include<math.h>
int main(){
	int i, n,dd=1;
	scanf("%d", &n);
	for(i=2; i<=(int)(sqrt(n)); i++){
		if(n%i==0)
			dd=0;
	}
		if(dd==1)
		   printf("%d la so nguyen to", n);
		else
		   printf("%d khong la so nguyen to", n);
	

	return 0;
}

