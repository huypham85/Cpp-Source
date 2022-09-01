#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll  L[1000007], R[1000007];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        memset(L, 0, sizeof(L));
        memset(R, 0, sizeof(R));
        ll n;
        cin>>n;
        ll a[n+1];
        stack<ll>stack_left;
        stack<ll>stack_right;
        for(ll i=1;i<=n;i++){
            cin>>a[i];
        }
        for(ll i=1;i<=n;i++){
            while(!stack_left.empty()&&a[i]<=a[stack_left.top()]) stack_left.pop(); // pop den khi gap phan tu nho hon
            L[i] = stack_left.empty()? 1: stack_left.top()+1; // mang luu lai can trai cua 1 phan tu
            stack_left.push(i);
        }

        for(ll i=n;i>=1;i--){
            while(!stack_right.empty()&&a[i]<=a[stack_right.top()]) stack_right.pop();
             R[i] = stack_right.empty()? n: stack_right.top()-1;
             stack_right.push(i);
        }
        ll res =0;
        for(ll i=1;i<=n;i++){
            ll max_tmp=0;
            max_tmp = (R[i]-L[i]+1)*a[i];
            res = max(res, max_tmp);
        }

        for(int i=1;i<=n;i++) cout<<L[i]<<" ";
        cout<<endl;
        for(int i=1;i<=n;i++) cout<<R[i]<<" ";
        cout<<endl;

        cout<<res<<endl;
    }
    return 0;
}