#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        cin>>s;
        stack<string>st;
        for(int i=0;i<s.size();i
            if(s[i] == '+'||s[i] == '-'||s[i] == '*'||s[i] == '/'||s[i] == '%'||s[i] == '^'){
                string a=st.top();st.pop();
                string b=st.top();st.pop();
                string tmp = s[i]+b+a;
                st.push(tmp);
            }
            else st.push(string(1,s[i]));
        }
        cout<<st.top()<<endl;
    }
    return 0;
}