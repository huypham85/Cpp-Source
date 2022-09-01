#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll LCM(ll a, ll b){
    ll x = __gcd(a,b);
    return (a/x)*b;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll res=1;
        for(ll i=1;i<=n;i++){
            res = LCM(res, i);
        }
        cout<<res<<endl;
    }
    return 0;
}