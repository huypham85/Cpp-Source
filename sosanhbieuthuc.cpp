#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s1,s2;
stack<char>st;
string solve(string s){
    string res="";
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') st.push(i);
        else if(s[i]==')'){
            int top =st.top();
            st.pop();
            if(top==0) continue;
            else if(s[top-1]=='+') continue;
            else if(s[top-1]=='-'){
                for(int j=top;j<=i;j++){
                    if(s[j]=='+') s[j]='-';
                    else if(s[j]=='-') s[j]='+';
                }
            }
        }   
    }
    for(int i=0;i<s.size();i++){
        if(s[i]!='('&&s[i]!=')') res+=s[i];
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>s1>>s2;
        if(solve(s1)==solve(s2)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}