#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll a[1003];
ll n;
ll le=0,chan=0;
ll sum(){
    ll ans=0;
    for(int i=0;i<n;i++){
        ans+=a[i];
        if(a[i]%2==0) chan=1;
        else le=1;
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        cin>>n;
        for(ll i=0;i<n;i++) cin>>a[i];
        chan=0;
        le=0;
        if((sum()%2==1)||((sum()%2==0)&&le==1&&chan==1)) cout<<"YES"<<endl;
        else if(((sum()%2==0)&&le==0&&chan==1)||(le==1&&chan==0)) cout<<"NO"<<endl;
    }
    return 0;
}