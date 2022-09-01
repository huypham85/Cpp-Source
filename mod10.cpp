#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t,n,x,i,j,p=0;
	cin>>t;
	for(i=1;i<=t;i++){
		cin>>n>>x;
		vector<long long>a(n);
		a.clear();
		for(j=0;j<n;j++)
			cin>>a[j];
		for(j=n-1;j>=0;j--){ 
			p+=a[j]*pow(x,j);
			p=p%(1000000007);
		}
	}
	cout<<p;		
	return 0;
}

