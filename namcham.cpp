#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j,dem=1;
	cin>>n;
	int a[n+1];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		if(a[i]==10&&a[i+1]==01||a[i]==01&&a[i+1]==10)
			dem++;
		else dem=dem;
	}
	cout<<dem;
	return 0;
}

