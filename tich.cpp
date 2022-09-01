#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        ll a[n+m+1];
        for(ll i=0;i<n+m;i++){
            cin>>a[i];
        }
        // for(ll i=0;i<m;i++){
        //     cin>>b[i];
        // }
        sort(a, a+n+m);
        for(int i=0;i<n+m;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}