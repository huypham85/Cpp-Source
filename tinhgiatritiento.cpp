#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        reverse(s.begin(), s.end());
        stack<ll> st;
        for(int i=0;i<s.size();i++){
            if(s[i]>='0'&&s[i]<='9') st.push((ll)(s[i]-'0'));
            if(s[i]=='*'||s[i]=='-'||s[i]=='+'||s[i]=='/'||s[i]=='%'){
                ll tmp2=st.top(); st.pop();
                ll tmp1=st.top();st.pop();
                ll tmp;
                if(s[i]=='+') tmp=tmp2+tmp1;
                if(s[i]=='-') tmp=tmp2-tmp1;
                if(s[i]=='*') tmp=tmp2*tmp1;
                if(s[i]=='/') tmp=tmp2/tmp1;
                if(s[i]=='%') tmp=tmp2%tmp1;
                //if(s[i]=='^') tmp=tmp1+tmp2;
                //cout<<tmp1<<" "<<tmp2<<endl;
                //ut<<tmp<<endl;
                st.push(tmp);
            }
        }
        cout<<st.top()<<endl;
    }
    return 0;
}