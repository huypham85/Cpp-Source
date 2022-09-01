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
    cin.ignore();
    while(t--){
        string s;
        cin>>s;
        ll after_process = 0;
        for(ll i=0;i<s.size();i++){
            after_process = after_process  + (s[i]-'0');
        }
        if(solve(after_process)==9) cout<<"1";
        else cout<<"0";
        cout<<endl;
    }
    return 0;
}