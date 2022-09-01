#include<bits/stdc++.h>
using namespace std;
int t, n,x;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
    	cin>>x>>n;
    	if(n==1) cout<<"1"<<endl;
    	else{
    		long long res=1;
    		for(int i=1;i<n;i++){
    			res=res+res*x;
			}
    		cout<<res<<endl;
		}
	}
    
	return 0;
}

