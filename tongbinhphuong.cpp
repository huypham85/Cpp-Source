#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll f[n+1]; // f[i] la so cach it nhat de phan tich so i
        for(ll i=0; i<=n;i++) f[i] =i;// tat ca deu la so 1
        for(ll i=1;i<=n;i++){
            for(ll j = 1;j<=sqrt(i);j++){
                f[i]= min(f[i],f[i-j*j]+1);
            }
        }
        cout<<f[n]<<endl;
    }
    return 0;
}