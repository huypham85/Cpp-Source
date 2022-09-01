#include<stdio.h>

int main(){
	float x;
	scanf("%f", &x);
	x=(int)x;
	if(x<0){
		printf("%0.0f %0.0f", x-1, x);}
	else{
		printf("%0.0f %0.0f", x, x+1);}

	return 0;
}

