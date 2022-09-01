#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const ll MOD = 1e9+7;
ll a[1000000];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        for(ll i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        ll maxx=0;
        for(ll i=0;i<n;i++){
            maxx += a[i]*i;
            maxx %= MOD;
        }
        cout<<maxx<<endl;
    }
    return 0;
}