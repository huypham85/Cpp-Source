#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    int a[n+1][n+1];
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++)
    		cin>>a[i][j];
	}
	for(int i=n;i>=1;i--){
		for(int j=n;j>=1;j--)
			cout<<a[j][i]<<" ";
		cout<<endl;
	}
    
	return 0;
}

