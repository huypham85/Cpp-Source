#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll solve(ll n){
    ll res=n;
    while(res>=10){
        ll sum=0;
        while(res){
            sum+=(res%10);
            res/=10;
        }
        res=sum;
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
    return 0;
}