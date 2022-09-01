#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t,n;
    cin>>t;
    int a[1001];
    a[1]=1;
    a[2]=2;
    for(int k=1;k<=t;k++){
    	cin>>n;
    	for(int i=3;i<=n;i++){
    		int S=1;
    		for(int j=1;j<=i/2;j++)
    			S+=a[j];
    		a[i]=S;
		}
		cout<<k<<" "<<a[n]<<endl;
	}
    
	return 0;
}

