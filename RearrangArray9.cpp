#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,i,j;
	cin>>t;
	for(i=1;i<=t;i++){
		cin>>n;
		vector<int>a(n+1);
		vector<int>vt(n+1);
		for(j=0;j<n;j++)
			vt[j]=0;
		for(j=0;j<n;j++){
			cin>>a[i];
		}
		vt[0]=a[0]*a[1];
		//cout<<vt[0]<<endl;
		vt[n-1]=a[n-1]*a[n-2];
		for(j=1;j<n-1;j++){
			vt[j]=a[j-1]*a[j+1];
		}
		for(j=0;j<n;j++)
			cout<<vt[j]<<" ";
		vt.clear();
	}
	return 0;
}

