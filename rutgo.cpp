#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t,n,k;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n>>k;
        if((n/k)%2==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}