#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n),b(n-1);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n-1;i++) cin>>b[i];
        ll res = n-1;
        for(int i=0;i<n-1;i++){
            if(a[i]!=b[i]){
                res=i;
                break;
            }
        }
        cout<<res+1<<endl;
    }
    return 0;
}