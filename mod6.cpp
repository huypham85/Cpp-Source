#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll t , b, m;
string s;
ll MOD(ll a, ll b, ll m){
    if(b==0) return 1;
    if(b==1) return a;
    if(b%2==0) return MOD(a*a%m, b/2, m)%m;
    if(b%2==1) return a*MOD(a*a%m, b/2, m)%m;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin.ignore();
        cin>>s;
        cin>>b>>m;
        ll k=0;
        for(int i=0;i<s.size();i++){
            k = k*10 + (s[i]-'0');
            k%=m;
        }
        ll res = MOD(k, b, m);
        cout<<res<<endl;
    }    
    return 0;
}