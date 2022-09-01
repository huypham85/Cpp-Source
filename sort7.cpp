#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll t , n;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<ll>b;
        b=a;
        sort(b.begin(), b.end());
        // for(int i=0;i<n;i++){
        //     cout<<b[i]<<" ";
        // } 
        // cout<<endl;
        int l , r;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                l = i+1;
                break;
            }
        } 
        for(int i=n-1;i>=0;i--){
            if(a[i]!=b[i]){
                r = i+1;
                break;
            }
        }
        cout<<l<<" "<<r<<endl;
    }
    return 0;
}