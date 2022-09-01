#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll n, c;
ll a[1000];
ll f[101][25001];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--){
        ll res=0;
        cin>>c>>n;
        memset(f,0,sizeof(f));
        for(int i=1;i<=n;i++) cin>>a[i];
        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=c;j++){
                if(j<a[i]){
                    f[i][j]=f[i-1][j];
                }
                else{
                    f[i][j]= max(f[i-1][j], f[i-1][j-a[i]]+a[i]);
                }
                res =max(res,f[i][j]);
            }
        }
        cout<<res<<endl;
    }
    return 0;
}