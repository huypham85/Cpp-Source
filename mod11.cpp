#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

ll MUL(ll a, ll b, ll c){
    if(b==0) return 0;
    ll tmp = MUL(a, b/2, c);
    tmp = (tmp+tmp)%c;
    if(b%2==1) tmp = (tmp+a)%c;
    return tmp;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    ll t, a, b, c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        ll res = MUL(a, b, c);
        cout<<res<<endl;
    }
    return 0;
}