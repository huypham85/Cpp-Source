#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll t, n, k;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<ll>a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        sort(a.begin(), a.end());
        ll res=0;
        for(ll i=0;i<n;i++){
            res+=upper_bound(a.begin()+i, a.end(), a[i]-1+k) -(a.begin()+i)-1;
        }
        cout<<res<<endl;
    }
    return 0;
}