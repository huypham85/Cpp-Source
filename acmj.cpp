#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin>>s;
    ll res=0;
    vector<ll>a,b;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') a.push_back(i);
        if(s[i]=='2') b.push_back(i);
    }
    for(int i=0;i<a.size();i++){
        //int tmp = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
        int tmp=b.end()-lower_bound(b.begin(), b.end(), a[i]);
        res+=tmp;
    }
    cout<<res;
    return 0;
}