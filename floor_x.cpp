#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<ll>a;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n, x;
        cin>>n>>x;
        a.resize(n);
        for(int i=0;i<n;i++) cin>>a[i];
        ll res = upper_bound(a.begin(),a.end(),x)-a.begin();
        if(res==0) cout<<"-1"<<endl;
        else cout<<res<<endl;
    }
    return 0;
}