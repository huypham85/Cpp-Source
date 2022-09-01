#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll t, n, a[10000007];
vector<ll>so;
void isolate(ll x){
    while(x){
        so.push_back(x%10);
        x/=10;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        so.clear();
        map<ll, ll>check;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) isolate(a[i]);
        for(int i=0;i<so.size();i++){
            check[so[i]]++;
        }
        for(int i=0;i<10;i++){
            if(check[i]>0) cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}