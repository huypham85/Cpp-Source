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
	vector<int>vt,vt1;
	int t , n, i, j;
	cin>>t;
	for(j=1;j<=t;j++){
		int dd=1;
		cin>>n;
		vt.resize(n);
		vt1.resize(n);
		for(i=0;i<n;i++){
			cin>>vt[i];
		}
		for(i=0;i<n;i++){
			cin>>vt1[i];
		}
		sapxep(n,vt);
		sapxep(n,vt1);
		for(i=0;i<n;i++){
			if(vt[i]>vt1[i]){
				dd=0;
				break;
			}
		}
		if(dd==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

