#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
ll mod=1000000007;
ll f[10000001][4]; // so cach di tu vi tri thu i ma ket thuc tai dia diem j
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;

	f[0][3]=1;
    for(ll i=1;i<=n;i++){
    	for(ll j=0;j<=3;j++){
    		for(ll k=0;k<=3;k++){
    			if(k!=j)
    				f[i][j]=(f[i][j]+f[i-1][k])%mod;
			}
		}
	}
    cout<<f[n][3];
	return 0;
}

