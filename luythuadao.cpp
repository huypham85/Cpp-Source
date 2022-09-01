#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const ll mod = 1e9+7;

ll POW(ll x, ll y){
    if(y==1) return x;
    ll tmp=POW(x,y/2)%mod;
    if(y%2==0) return (tmp*tmp)%mod;
    return ((tmp*tmp)%mod * x)%mod;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n,k=0;
        cin>>n;
        ll tmp =n;
        while(tmp){
            k= k*10+tmp%10;
            tmp/=10;
        }
        //cout<<k<<endl;
        ll res = POW(n,k);
        cout<<res<<endl;
    }
    return 0;
}