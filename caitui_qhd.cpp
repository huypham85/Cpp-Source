#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
struct object {
    ll w=0;
    ll v =0;

};
ll n, m;
object a[1001];
ll f[1001][1001]; 
ll res=0;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        res=0;
        memset(f,0,sizeof(f));
        cin>>n>>m;
        for(ll i=1;i<=n;i++){
            cin>>a[i].w;
        }
        for(ll i=1;i<=n;i++){
            cin>>a[i].v;
        }
        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=m;j++){
                if(j<a[i].w){
                    f[i][j]=f[i-1][j];
                }
                else{
                    f[i][j]= max(f[i-1][j], f[i-1][j-a[i].w]+a[i].v);
                }
                res =max(res,f[i][j]);
            }
        }
        cout<<res<<endl;
    }
    return 0;
}