#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
string s;
stack<ll>a;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='C') a.push(12);
        if(s[i]=='H') a.push(1);
        if(s[i]=='O') a.push(16);
        if(s[i]=='(') a.push(0);
        if(s[i]==')'){
            ll tmp=0;
            while(a.top()!=0&&!a.empty()){
                tmp+=a.top();
                a.pop();
            }
            a.pop();
            a.push(tmp);
        }  
        if(s[i]>='2'&&s[i]<='9'){
            int num = s[i]-'0';
            ll tmp2 =a.top();
            ll p = tmp2*num;
            a.pop();
            a.push(p);
        }
    }
    ll res=0;
    while(!a.empty()){
        res+= a.top();
        a.pop();
    }
    cout<<res;
    return 0;
}
