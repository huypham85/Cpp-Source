#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll t, n;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        map<ll,ll>a;
        cin>>n;
        for(ll i=0;i<n;i++){
            ll so;
            cin>>so;
            if(so>=0&&so<=n) a[so]++;
        }
        for(ll i=0;i<n;i++){
            if(a[i]!=0) cout<<i<<" ";
            else cout<<"-1"<<" ";
        }
        cout<<endl;
    }
    return 0;
}