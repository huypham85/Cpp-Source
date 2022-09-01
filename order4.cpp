#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll a[100005];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    ll t, n;
    cin>>t;
    while(t--){
        cin>>n;
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll in, ex;
        in= a[0];
        ex= 0;
        for(ll i=1;i<n;i++){
            ll ex_new = max(ex, in);
            in = ex + a[i];
            ex = ex_new;
        }
        cout<<max(in,ex)<<endl;
    }
    return 0;
}