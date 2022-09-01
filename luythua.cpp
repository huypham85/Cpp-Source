#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll m = 1e9+7;
ll MOD(ll a, ll b){
    if(b==0) return 1;
    if(b==1) return a;
    if(b%2==0) return MOD(a*a%m, b/2)%m;
    if(b%2==1) return a*MOD(a*a%m, b/2)%m;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        cout<<MOD(n,k)<<endl;
    }
    return 0;
}