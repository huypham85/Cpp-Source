#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n+1];
	int tanso[2]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
		tanso[a[i]]++;
	}
	if(tanso[0]==1) cout<<"YES";
	else cout<<"NO";
	return 0;
}

