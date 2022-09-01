#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll t;
ll solve(ll n){
    
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        for(ll i=2;i<=n;i++){
            ll dem =0;
            while(n%i==0){
                dem++;
                n/=i;
            }
            if(dem>0){
                cout<<i<<" "<<dem<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}