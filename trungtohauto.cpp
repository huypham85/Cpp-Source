#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int t;
int prior(char c){
    if(c=='+'||c=='-') return 1;
    if(c=='*'||c=='/'||c=='%') return 2;
    if(c=='^') return 3;
    if(c=='(') return 0;
}
void hauto(){
    stack<char>st;
    string s;
    cin>>s;
    for(int i =0 ;i<s.size();i++){
        char c=s[i];
        if(c=='(') st.push(c);
        if(c>='a'&&c<='z') cout<<c;
        if(c>='A'&&c<='Z') cout<<c;
        if(c==')'){
            while(st.size()&&st.top()!='('){
                cout<<st.top();
                st.pop();
            }
            st.pop();
        }
        if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^'){
            while(!st.empty()&&prior(c)<=prior(st.top())){
                cout<<st.top();
                st.pop();
            }
            st.push(c);
        }

    }
    while(!st.empty()){
        if(st.top()!='(') cout<<st.top();
        st.pop();
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        hauto();
        cout<<endl;
    }
    return 0;
}
    