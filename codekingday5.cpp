#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
ll mod=1000000007;
ll f[10000001];
ll luythua (ll a, ll b){
	if (b==0) return 1;
	if (b%2==0){
		ll p=luythua (a, b/2);
		return (p*p)%mod;
	}
	else{
		ll p=luythua (a, b-1);
		return (p*a)%mod;
	}
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
   	f[1]=0;
   	f[2]=3;
   	f[3]=6;
   	if(n<=3) cout<<f[n];
   	else{
   		for(ll i=4;i<=n;i++){
   			f[n]=(luythua(3, n-1)-f[n-1]);
   		}
		cout<<f[n]%mod;
	}   	
	return 0;
}

