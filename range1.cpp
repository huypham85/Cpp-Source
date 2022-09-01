#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t,n,q,l,r;
int a[100005];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n>>q;
        for(int i=0;i<n;i++) cin>>a[i];
        while(q--){
            cin>>l>>r;
            ll res=0;
            for(int i=l-1;i<=r-1;i++) res+=a[i];
            cout<<res<<endl;
        }
    }
    return 0;
}