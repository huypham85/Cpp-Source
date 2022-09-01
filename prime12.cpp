#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n,k;
vector<int>uoc;
void solve(){
    uoc.push_back(0);
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            while(n%i==0){
                uoc.push_back(i);
                n/=i;
            }
        }
    }
    if(n!=1) uoc.push_back(n);
    //sort(uoc.begin(), uoc.end(), greater<int>());
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        uoc.clear();
        cin>>n>>k;
        solve();
        //int len=uoc.size();  
        if(k>uoc.size()-1) cout<<"-1"<<endl;
        else cout<<uoc[k]<<endl;
    }
    return 0;
}