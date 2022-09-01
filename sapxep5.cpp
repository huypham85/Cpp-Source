#include<bits/stdc++.h>
using namespace std;
void sapxep(int n, vector<int> &vt){
	for(int i=0; i<n; i++){
		for(int j=n-1; j>i; j--){
			if(vt[j]<vt[j-1]){
				int tmp =vt[j];
				vt[j]=vt[j-1];
				vt[j-1]=tmp;
			}
		}
	}
}

int main(){
	int t, n, i,j;
	cin>>t;
	for(i=1;i<=t;i++){
		cin>>n;
		vector<int>vt,a;
		vt.resize(n);
		for(j=0;j<n;j++){
			cin>>vt[j];
		}
		sapxep(n,vt);
		for(j=0;j<n;j++){
			a.push_back(vt[n-1-j]);
			a.push_back(vt[j]);
			
		}
		for(j=0;j<(a.size())/2;j++)
			cout<<a[j]<<" ";
			
		cout<<endl;
	}
	return 0;
}

