#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,i,j;
	cin>>t;
	for(i=1;i<=t;i++){
		cin>>n;
		int a[n+1];
		vector<int>vt(n);
		vt.clear();
		for(j=0;j<n;j++){
			cin>>a[i];
		}
		vt[0]=a[0]*a[1];
		vt[n-1]=vt[n-1]*vt[n-2];
		for(j=1;j<n-1;j++){
			vt[j]=vt[j-1]*vt[j+1];
		}
		for(j=0;j<n;j++)
			cout<<vt[j]<<" ";
	}
	return 0;
}

