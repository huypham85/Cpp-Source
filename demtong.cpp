#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,dem=0,i,j;
	cin>>n>>m;
	int a[n+1];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]+a[j]==m)
				dem++;
		}
	}
	cout<<dem;
	return 0;
}

