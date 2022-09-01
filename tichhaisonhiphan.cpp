#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll BinToDecimal(string s){
// 1100
    ll res =0;
    int mu =0;
    for(int i=s.size()-1;i>=0;i--){
        int tmp = s[i]-'0';
        res+= tmp*(int)(pow(2,mu));
        mu++;
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s1, s2;
        cin>>s1>>s2;
        ll so1 = BinToDecimal(s1); ll so2 = BinToDecimal(s2);
        //cout<<so1<<" "<<so2<<endl;
        ll ans = so1*so2;
        cout<<ans<<endl;
    }
    return 0;
}