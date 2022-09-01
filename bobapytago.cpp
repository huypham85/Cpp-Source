#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll t, n,a[10001];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        ll dd=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            a[i]*=a[i];
        }
        sort(a,a+n);
        for(ll i=0;i<n-2;i++){
            if(dd==0){
                for(ll j=i+1;j<n-1;j++){
                    ll tmp=(a[i]+a[j]);
                    //cout<<sqrt(tmp)<<endl;
                    if(binary_search(a, a+n, tmp)){
                        cout<<"YES"<<endl;
                        dd=1;
                        break;
                    }
                }
            }
            else break;
        }
        if(dd==0) cout<<"NO"<<endl;
    }
    return 0;
}