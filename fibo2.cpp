#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll fibo[93];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    fibo[0]=0;
    fibo[1]=1;
    fibo[2]=1;
    for(ll i=3;i<=93;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll dd=0;
        cout<<fibo[n]<<endl;
        // for(ll i=0;i<=93;i++){
        //     if(fibo[i]==n){
        //         //cout<<"YES"<<endl;
        //         dd=1;
        //     }
        // }
        // if(dd==0) cout<<"NO"<<endl;
        // else cout<<"YES"<<endl;

    }
    return 0;
}