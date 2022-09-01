#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    ll k,x,y,t;
 	cin>>t;
 	while(t--){
 		cin>>k>>x>>y;
 		ll s=0;
 		if(k%2==0){
 			s=(k/2)*y;
		}
		else if(k%2==1){
			ll tmp=k;
			s=(tmp/2)*y;
			//k=k-(2*tmp);
			s+=x;
		}
		cout<<s<<endl;
	}		
	return 0;
}

