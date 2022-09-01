#include<stdio.h>
#include<math.h>
int n;
void nhap(){
	scanf("%d", &n);
}
int ktra(){
	if(n<2)
		return 0;
	else{
		for(int i=2; i<=sqrt(n); i++){
			if(n%i==0)
				return 0;
			else
				return 1;
		}
			
	}
}
int main(){
	nhap();
	if(ktra()==0)
		printf("ko la snto");
	else if(ktra()==1)
		printf("la so nto");
	return 0;
}

