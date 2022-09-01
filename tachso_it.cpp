#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t;
vector<ll>a;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        ll dd=0;
        ll n;
        cin>>n;
        for(ll i=2;i*i*i<n;i++){
            if(n%i==0){
                for(ll j=i+1;j*j<(n/i);j++){
                    if(n%(i*j)==0&&(n/(i*j))>j){
                        dd=1;
                        break;
                    }
                }
            }
        }
        if(dd==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}