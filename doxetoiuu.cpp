#include<bits/stdc++.h>
using namespace std;
void sapxep(int n,vector<int> &vt){
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
	int n,i,j,t;
	cin>>t;
	for(j=1;j<=t;j++){
		cin>>n;
		vector<int>vt(n);
		for(i=0;i<n;i++)
			cin>>vt[i];
		sapxep(n,vt);
		cout<<2*(vt[n-1]-vt[0])<< endl;
	}
	return 0;
}

