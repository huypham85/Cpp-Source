#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t,n,k;
const ll mod =1e9+7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        k=3;
        ll f[100005]={0};
        f[0]=1;
        for(ll i=0;i<=n;i++){
            for(ll j=1;j<=min(i,k);j++){
                f[i]=(f[i]+f[i-j]);
            }
        }
        cout<<f[n]<<endl;
    }
    return 0;
}