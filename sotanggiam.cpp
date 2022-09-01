#include<stdio.h>

int main(){//dem so so nguyen to tang giam theo tung chu so, voi n chu so cho truoc
	int t=1,n,u=0,h=0;
	scanf("%d",&n);
	for(int x=1;x<=n;x++)
		t*=10;
	for(int i=(t/10);i<t;i++){
		int count=0;
		for(int j=1;j<=i;j++){
			if(i%j==0)
			count++;
		}
		if(count==2){
			int m=0,w=0,k,y;
			int a=i%10;
				y=i/10;
			for(int g=1;g<=n-1;g++){
				k=y%10;
				if(a>k){
					a=k;
					m++;
					y/=10;
				}
				else if(k>a){
					a=k;
					w++;
					y/=10;
				}
			}
			if(m==n-1)
				u++;
			else if(w==n-1)
				h++;
		}
		else continue;
	}
	printf("%d", u+h);
	return 0;
}


