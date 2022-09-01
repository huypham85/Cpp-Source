#include<bits/stdc++.h>
using namespace std;
using namespace std;
long long ktra(long long i)
{
    if (i< 2)    
        return 0;
    for (long long j = 2; j <= sqrt(i); j ++)
    {
        if ((i)%j==0)
        {
            return 0;
        }
    }
    return 1;
}
int main(){
	long long t,n,i,j,k;
	cin>>t;
	j=1;
	while(j<=t){
		cin>>n;
		if(ktra(n)==1){
			cout<<n<<endl;
			j++;
		}
		else{
		long long a[100001]={0};
		k=1;
		long long dem=0;
		
		for(i=1; i<=(long long)sqrt(n); i++){
			if(n%i==0){
				if(i*i==n){
					a[k]=i; 
					dem--;			
				}
				else
					a[k]=i;
					a[k+1]=n/i;
					k+=2;
					dem+=2;
			}
		
		}
		 a[100001];
		for(i=1; i<=dem-1;i++){
			for(k=dem; k>i; k--){
				if(a[k]<a[k-1]){
					long long tmp=a[k];
						a[k]= a[k-1];
						a[k-1]= tmp;
				}
			}
		}
		for(i=dem-1;i>0;i--){
			if(ktra(a[i])==1){
				cout<<a[i]<<endl;
				break;
			}
		}
		j++;
		}
	}
	return 0;
}

