#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int>res;
void in(ll a[],ll n){
	for (ll i = 0; i < n; i++){
		cin >> a[i];
	}
}

ll ucln_of_array(ll a[], ll n){
	ll x=a[0]; 
	for (ll i=1; i<n; i++){
		x=__gcd(x,a[i]); 
	}
	return x;
}

int main(){
	ll n; 
	cin>>n;
	ll a[n+1];
	in(a,n);
	ll ans=ucln_of_array(a,n);
	for(ll i=1;i<=sqrt(ans);i++){
		if(ans%i==0){
			if(i==sqrt(ans)) res.push_back(i);
			else{
				res.push_back(i);
				res.push_back(ans/i);
			}
		}
	}
	cout<<res.size();
	return 0;
}

