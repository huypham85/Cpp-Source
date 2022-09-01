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
        stack<string>st;
        for(int i=s.size();i>=0;i--){
            if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'||s[i]=='%'){
                string tmp1 = st.top();
                st.pop();
                string tmp2 = st.top();
                st.pop();
                string tmp = "("+tmp1+s[i]+tmp2+")";
                st.push(tmp);
            }
            else st.push(string(1,s[i]));
        }
        cout<<st.top()<<endl;
    }
    return 0;
}