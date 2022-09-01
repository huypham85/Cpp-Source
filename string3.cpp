#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

ll power(ll x,ll y, ll mod){
    if(y==0) return 1;
    if(y==1) return x;
    ll res=power(x,y/2,mod);
    if(y%2==0) return (res%mod*res%mod)%mod;
    else return (x*res%mod*res%mod)%mod;
}

ll BinToDec(string s)
{
    int p = s.size()-1;
    ll decNumber = 0;
    int mu =0;
    
    while (p >=0)
    {
        /*ll tmp;
        if(mu =0) tmp =1;
        else{
            for(int i=1;i<=mu;i++){
                tmp *=2;
                if(tmp%5==0) tmp%=5;
            }
        }*/
        decNumber = decNumber%5 + (s[p]-'0') * power(2, mu, 5);
        //decNumber%=5;
        p--;
        mu++;
        //cout<<decNumber<<endl;
    }
    return decNumber;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        cin>>s;
        //cout<<BinToDec(s)<<endl;
        if(BinToDec(s)%5==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}