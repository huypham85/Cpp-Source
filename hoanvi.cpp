#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,dem=0;
	cin>>n;
	int a[n+1],b[5001]={0};
	for(i=0;i<n;i++){
		cin>>a[i];
		b[a[i]]++;
	}
	for(i=1;i<=n;i++){
		if(b[i]==0)
			dem++;
	}
	cout<<dem;
	return 0;
}

