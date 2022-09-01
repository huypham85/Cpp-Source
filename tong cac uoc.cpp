#include<stdio.h>
#include<math.h>

int main(){
	long long i,j,n,t,sum=0;
	scanf("%lld", &t);
	long long a[t+1];
	for(i=1; i<=t; i++){
		scanf("%lld", &a[i]);
	}
	for(j=1; j<=t; j++){
		sum=0;
		for(i=1;i<=(int)sqrt(a[j]); i++){
			if(a[j]%i==0){
			   if((i*i)==a[j])
			   sum+=i;
			   else
			   sum+=i+a[j]/i;
		    }
   		}
   		printf("%lld\n", sum);
    }
	return 0;
}

