#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n, k;
const int mod = 1e9+7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int a[n+1];
        for(int i=0;i<n;i++) cin>>a[i];
        ll f[1005]={0};
        // f[i] so cach chon de co tong la i
        f[0]=1;
        for(int i=1;i<=k;i++){
            for(int j=0;j<n;j++){
                if(i>=a[j]){
                    f[i] = (f[i]+f[i-a[j]])%mod;
                }
            }
        }
        cout<<f[k]<<endl;
    }
    return 0;
}