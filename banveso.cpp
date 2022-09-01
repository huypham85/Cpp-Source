#include <bits/stdc++.h>
using namespace std;

main(){
	while(1){
		long long n;
		cin>>n;
		if(n==0)	return 0;
		n*=6;
		long long a[55];
		for(long long i=1;i<=49;i++){
			a[i]=0;
		}
		long long b[n+1];
		for(long long i=0;i<n;i++){
			cin>>b[i];
			a[b[i]]=1;
		}
		long long kt=0;
		for(long long i=1;i<=49;i++){
			if(a[i]!=1){
				kt=1;
			}
		}
		if(kt==1)	cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
	}
}
