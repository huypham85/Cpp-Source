#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll ans[10004];
ll toBin(int n){
    vector<int>a;
    while(n){
        a.push_back(n%2);
        n/=2;
    }
    ll res =0;
    for(int i=a.size()-1;i>=0;i--) res = res*10+a[i];
    return res;
}
void Solve(){
    ans[0]=0;
    ans[1]=1;
    for(int i=2;i<=10000;i++){
        ans[i]=toBin(i);
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    Solve();
    while(t--){
        ll n;
        cin>>n;
        for(int i=1;i<=n;i++) cout<<ans[i]<< " ";
        cout<<endl;
    }
    return 0;
}