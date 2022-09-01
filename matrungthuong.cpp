#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin>>s;
    ll res=0;
    for(int i=0;i<s.size()-1;i++){
        if((s[i]-'0')%4==0) res++;
        int tmp=s[i]-'0';
        tmp=tmp*10+(s[i+1]-'0');
        if(tmp%4==0) res=res+(i+1);
    }
    int len=s.size()-1;
    if((s[len]-'0')%4==0) res++;
    cout<<res;
    return 0;
}