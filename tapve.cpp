#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, i,j;
	cin>>n;
	for(i=0;i<=n;i++){
		for(j=1;j<=(n-i);j++)
			cout<<" ";
		for(j=0;j<=i;j++)
			cout<<j<<" ";
		for(j=i-1;j>=1;j--)
			cout<<j<<" ";
		if(i>0) cout<<"0";	
		cout<<endl;
	}
	for(i=n-1;i>=0;i--){
		for(j=1;j<=(n-i);j++)
			cout<<" ";
		for(j=0;j<=i;j++)
			cout<<j<<" ";
		for(j=i-1;j>=1;j--)
			cout<<j<<" ";
		if(i>0) cout<<"0";
		if(i==0) break;	
		cout<<endl;
	}
	return 0;
}

