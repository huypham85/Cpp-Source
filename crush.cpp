#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll n;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    ll a[n+1];
    ll res=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a+n);
    ll tmp;
    for(int i=0;i<n;i++){
        if(a[i]%2==1){
            tmp=a[i];
            break;
        }
    }
    for(int i=0;i<n;i++){
        res+=a[i];
    }
    if(res%2==1) cout<<res;
    else cout<<(res-tmp);
    return 0;
}