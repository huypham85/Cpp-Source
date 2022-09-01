#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<ll>st;
        stack<ll>so;
        string res="";
        for(ll i=0;i<s.size();i++){
            if(s[i]=='[') st.push(i);
            if(s[i]>='0'&&s[i]<='9'){
                ll tmp=0;
                while(i<s.size()&&s[i]>='0'&&s[i]<='9'){
                    tmp=tmp*10+(ll)(s[i]-'0');
                    i++;
                }
                if(i>0) i--;
                so.push(tmp);
            }
            if(s[i]==']'){
                ll top=st.top();
                if(!st.empty()) st.pop();
                string tmp="";
                for(ll j=top+1;j<i;j++){
                    if(s[j]>='a'&&s[j]<='z') tmp+=s[j];
                    else if(s[j]=='[') break;
                }
                ll len=so.top();
                if(!so.empty()) so.pop();
                tmp=tmp+res;
                string tmp2="";
                for(ll j=1;j<=len;j++){
                    tmp2+=tmp;
                }
                res=tmp2;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}