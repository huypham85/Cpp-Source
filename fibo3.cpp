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
        ll a[n+1];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            for(int j=0;j<93;j++){
                if(fibo[j]==a[i]){
                    cout<<a[i]<<" ";
                    break;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}