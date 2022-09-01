#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll n;
ll a[100005];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--){
        cin>>n;
        vector<ll> le;
        vector<ll> chan;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++){
            if(i%2==1) le.push_back(a[i]);
            else chan.push_back(a[i]);
        }
        sort(le.begin(),le.end());
        sort(chan.begin(),chan.end(),greater<int>());
        for(int i=0;i<n/2;i++){
            cout<<le[i]<<" "<<chan[i]<<" ";
        }
        if(n%2==1) cout<<le[le.size()-1];
    }
    return 0;
}