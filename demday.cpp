#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 123456789;
ll POW(ll a, ll b){
    if(b==0) return 1;
    if(b==1) return a;
    if(b%2==0) return POW(a*a%mod,b/2)%mod;
    return a*POW(a*a%mod, b/2)%mod;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll res = POW(2,n-1)%mod; // C1n + C2n+...+ Cnn => ct chung la 2 mu n-1
        cout<<res<<endl;
    }
    return 0;
}