#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll t,n, m;
vector<ll>a;
vector<ll>b;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n>>m;
        a.resize(n);
        b.resize(m);
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<m;i++) cin>>b[i];
        vector<ll>c;
        for(ll i=0;i<n;i++) c.push_back(a[i]);
        for(ll i=0;i<m;i++) c.push_back(b[i]);
        sort(c.begin(), c.end());
        for(int i=0;i<c.size();i++){
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}