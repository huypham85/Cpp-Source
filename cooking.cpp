#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t;
ll n, a, b,minn;
ll m[3];

void Try(ll res, ll price){
    if(res==n){
        minn=min(price, minn);
    }
    if(res<n&&price<minn){
        for(ll i=1;i<=2;i++){
            price+=m[i];
            res+=i;
            Try(res, price);
            price-=m[i];
            res-=i;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        m[1]=a;
        m[2]=b;
        minn=99999999999999999;
        Try(0,0);
        cout<<minn<<endl;
    }
    return 0;
}