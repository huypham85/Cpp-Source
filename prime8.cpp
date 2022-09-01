#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n, p;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n>>p;
        int res =0;
        while(n){
            n/=p; // res = n/p + n/p^2 + n/p^3+ ...
            res+=n;
        }
        cout<<res<<endl;
    }
    return 0;
}