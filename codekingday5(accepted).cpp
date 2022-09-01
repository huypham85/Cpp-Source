#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod=1000000007;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
	ll n, i, j; 
	cin>>n;
	ll x0=0, x1=0, x2=0, x3=1;
	for(i=1; i<=n; i++){
		ll y0,y1,y2,y3;
		y0=(x1+x2+x3)%mod;
		y1=(x0+x2+x3)%mod;
		y2=(x0+x1+x3)%mod;
		y3=(x0+x1+x2)%mod;
		x0=y0;
		x1=y1;
		x2=y2;
		x3=y3;
	}
	cout<<x3;
	return 0;
}
