#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n, a, b;
        cin>>n>>a>>b;
        ll tmp = __gcd(a, b);
        //cout<<tmp<<endl;
        for(int i=0;i<tmp;i++) cout<<n;
        cout<<endl;
    }
    return 0;
}