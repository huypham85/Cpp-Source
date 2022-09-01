#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll t, n, a[100];
const ll MOD = 1e9+7;

ll POW(ll a, ll b){
    if(b==1) return a;
    if(b%2==0) return POW(a*a%MOD, b/2)%MOD;
    else return a*POW(a*a%MOD, b/2) %MOD;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        ll h =1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            h*=a[i];
            h%=MOD;
        }
        ll g = a[0];
        for(int i=1;i<n;i++){
            g = __gcd(g, a[i]);
        }
        ll res = POW(h, g);
        cout<<res<<endl;
    }
    return 0;
}