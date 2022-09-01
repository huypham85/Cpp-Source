#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t,n,k,i,j;
	cin>>t;
	for(i=1;i<=t;i++){
		cin>>n>>k;
		long long s=0;
		for(j=1;j<=n;j++){
			s+=j%k;
		}
		if(k==s)
			cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
	return 0;
}

