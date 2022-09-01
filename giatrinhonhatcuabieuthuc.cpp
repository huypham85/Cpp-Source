#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const ll MAX = 1e7+1;
ll n;
vector<ll>a;
vector<ll>b; 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        a.resize(n);
        b.resize(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<ll>());
        ll res=0;
        for(int i=0;i<n;i++){
            res+=a[i]*b[i];
        }
        cout<<res<<endl;
    }
    return 0;
}