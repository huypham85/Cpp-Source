#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n][n];
	vector<int>b;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			b.push_back(a[i][j]);
		}
	}
	sort(b.begin(), b.end());
	int hang=0;
	for(int i=0;i<b.size();i+=n){
		hang++;
		if(hang%2==1){
			for(int j=i;j<i+n;j++)
				cout<<b[j]<<" ";
			cout<<endl;
		}
		else{
			for(int j=i+n-1;j>=i;j--)
				cout<<b[j]<<" ";
			cout<<endl;
		}
	}	
	return 0;
}

