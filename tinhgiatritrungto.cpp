#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int t;
int prior(char c){
    if(c=='+'||c=='-') return 1;
    if(c=='*'||c=='/') return 2;
    if(c=='^') return 3;
    if(c=='(') return 0;
}
string hauto(string s){
    stack<char>st;
    string res="";
    for(int i =0 ;i<s.size();i++){
        char c=s[i];
        if(c=='(') st.push(c);
        if(c>='0'&&c<='9') res+=c;
        if(c==')'){
            while(st.top()!='('){
                res=res+st.top();
                st.pop();
            }
            st.pop();
        }
        if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^'){
            if(res[res.size()-1]>='0'&&res[res.size()-1]<='9') res+='#';
            while(!st.empty()&&prior(c)<=prior(st.top())){
                res+=st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty()){
        if(st.top()!='(') res+=st.top();
        st.pop();
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
   // cin.ignore();
    while(t--){
        string s;
        cin>>s;
        s=hauto(s);
        //cout<<s<<endl;
        stack<ll> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'||s[i]=='-'||s[i]=='+'||s[i]=='/'||s[i]=='%'){
                ll tmp1=st.top(); st.pop();
                ll tmp2=st.top();st.pop();
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
            else{
                ll tmp=0;
                while(i<s.size()&&s[i]>='0'&&s[i]<='9'){
                    tmp=tmp*10+(ll)(s[i]-'0');
                    i++;
                }
                if(s[i]!='#') i--;
                st.push(tmp);
            }
        }
        cout<<st.top()<<endl;
    }
    return 0;
}