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
        cin>>n>>k;
        ll dp[100005]={0};
        dp[0]=1;
        for(ll i=0;i<=n;i++){
            for(ll j=1;j<=min(i,k);j++){
                dp[i]=(dp[i]+dp[i-j])%mod;
            }
        }
        cout<<dp[n]<<endl;
    }
    return 0;
}