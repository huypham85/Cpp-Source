#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t,n,k,i,j,s=0;
	cin>>t;
	for(j=1;j<=t;j++){
		cin>>n>>k;
		s=0;
		for(i=1;i<=n;i++){
			s+=i%k;
		}
		cout<<s<<endl;
	}
	return 0;
}

