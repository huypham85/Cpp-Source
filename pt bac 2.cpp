#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c, x1, x2, d, denta;
	scanf("%f%f%f%f", &a, &b, &c, &d);
	if(a==0 && b!=0)
	   printf("%0.5f", (d-c)/b);
	if(a==0 && b==0 && c!=d)
	   printf("NO");
	if(a==0 && b==0 && c==d)
	   printf("Infinity");
	if(a!=0){
		denta=b*b-4*a*(c-d);
		if(denta>0){
		  x1=(-b-sqrt(denta))/(2*a);
		  x2=(-b+sqrt(denta))/(2*a);
		  if(x1<x2)
		     printf("%0.5f %0.5f", (-b-sqrt(denta))/(2*a), (-b+sqrt(denta))/(2*a));
		  else
		     printf("%0.5f %0.5f", (-b+sqrt(denta))/(2*a), (-b-sqrt(denta))/(2*a));
		}    
		if(denta==0)
		   printf("%0.5f", -b/2*a);
		if(denta<0)
		   printf("NO");
	}
	return 0;
}

