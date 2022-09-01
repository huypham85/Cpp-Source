#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<int>a,b;

void solve(){
    int n;
    cin>>n;
    a.clear();
    b.clear();
    a.resize(n);
    b.resize(n);
    for(int i=0;i<n;i++) cin>>a[i];
    b=a;
    sort(b.begin(),b.end());
    int l,r;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            l=i+1;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]!=b[i]){
            r=i+1;
            break;
        }
    }
    cout<<l<<" "<<r<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}