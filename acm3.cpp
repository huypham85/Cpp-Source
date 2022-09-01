#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
using namespace std;
 
vector<int>mau,a;
bool ok[11]={false};
int res;
string s;
void init(int n){
    for(int i=1;i<=n;i++) mau.push_back(i);
    ok[11]={false};
    res=987654321;
}
 
void solve(){
    int s=0;
    for(int i=0;i<a.size();i++){
        s=s*10+a[i];
    }
    res=min(res,s);
 
}
 
void Try(int n){
    if(s[n]=='I'){
        for(int i=0;i<mau.size();i++){
            if(!ok[mau[i]] && mau[i]>a.back()){
                a.push_back(mau[i]);
                ok[mau[i]]=true;
                if(n==s.length()-1) solve();
                else Try(n+1);
                ok[mau[i]]=false;
                a.pop_back();
            }
        }
        return;
    }
    else{
        for(int i=0;i<mau.size();i++){
            if(!ok[mau[i]] && mau[i]<a.back()){
                a.push_back(mau[i]);
                ok[mau[i]]=true;
                if(n==s.length()-1) solve();
                else Try(n+1);
                ok[mau[i]]=false;
                a.pop_back();
            }
        }
 
    }
}
 
int main(){
    fast_io;
    int t;
    cin>>t;
    while (t--)
    {
        cin>>s;
        mau.clear();
        init(s.length()+1);
        for(int i=0;i<mau.size();i++){
            a.push_back(mau[i]);
            ok[mau[i]]=true;
            Try(0);
            ok[mau[i]]=false;
            a.pop_back();
        }
        cout<<res<<endl;
    }
    return 0;
}