#include <bits/stdc++.h>
using namespace std;
 
main(){
	long long t,n;
	//cin>>t;
	//for(int u=1;u<=t;u++){
		long long m;
		cin>>m;
		cin>>n;
		long long a[n+1];
		for(long long i=0;i<n;i++){
			cin>>a[i];
		}
		long long max=0;
		for(long long i=0;i<n-2;i++){
			for(long long j=i+1;j<n-1;j++){
				for(long long k=j+1;k<n;k++){
					if(a[i]+a[j]+a[k]<=m&&a[i]+a[j]+a[k]>=max){
						max=a[i]+a[j]+a[k];
					}
				}
			}
		}
		
		cout<<max;
	//}
	return 0;	
}
