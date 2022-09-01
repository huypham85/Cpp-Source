#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1000007], L[1000007], R[1000007];
ll n;
void solve(){
    cin>>n;
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    stack<ll>st;
    for(ll i=1;i<=n;i++){
        while(!st.empty()&&a[i]<=a[st.top()]) st.pop();
        L[i]=st.empty() ? 1 : st.top()+1;
        st.push(i);
    }
    stack<ll>st1;
    for(ll i=n;i>=1;i--){
        while(!st1.empty()&&a[i]<=a[st1.top()]) st1.pop();
        R[i]=st1.empty() ? n : st1.top()-1;
        st1.push(i);
    }
    ll l=0, r=0, ans=0;
    for(ll i=0;i<n;i++){
        ll tmp=a[i]*(R[i]-L[i]+1);
        if(tmp>ans){
            ans=tmp;
            l=L[i];
            r=R[i];
        }
        else{
            if(tmp==ans){
                if(l>L[i]){
                    l=L[i];
                    r=R[i];
                }
            }
        }
    }
    cout<<ans<<" "<<l<<" "<<r<<endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}