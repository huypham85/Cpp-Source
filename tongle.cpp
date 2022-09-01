#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>n;
		int s=0;
		vector<int>a(n);
		for(int j=0;j<n;j++){
			cin>>a[i];
			s+=a[i];
		}
		if(s%2==0) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}

