#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll t,n;
string s; 
ll pre_string(ll a, string str){
    ll newNum=0;
    for(int i=0;i<str.size();i++){
        newNum = (newNum * 10 + (str[i]-'0'))%a;
    }
    return newNum;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        //cin.ignore();
        cin>>s;
        ll res = __gcd(n, pre_string(n, s));
        cout<<res<<endl;
    }
    return 0;
}