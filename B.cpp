#include<stdio.h>
#include<math.h>
int main(){
	long long hang=1, sum =0, n, i;
	scanf("%lld", &n);
	if(n<3)
		printf("NO");
	else{
		i=sqrt(n);
		if(i*i==n)
			printf("YES");	
		else{	
			while(sum<n){
				sum+=hang;
				hang+=1;
			}
			if(sum==n) printf("YES");
			else printf("NO");	
		}
	}
	return 0;
}

