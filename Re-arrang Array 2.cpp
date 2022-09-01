#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t, n, i;
	cin>>t;
	for(long long u=1;u<=t;u++){
		cin>>n;
		long long dem=0;
		vector<long long>a(n), b;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		for(i=0;i<n;i++){
			if(a[i]==0){
				dem++;
				//cout<<dem<<endl;
			}
			else continue;
		}
		for(i=0;i<n;i++){
			if(a[i]!=0)
				cout<<a[i]<<" ";
		}
		for(i=1;i<=dem;i++) cout<<"0"<<" ";
		cout<<endl;
	}
	return 0;
}

