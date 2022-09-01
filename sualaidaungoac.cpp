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
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || (s[i]==')' && st.size()==0)) st.push(s[i]);
            else if(s[i]==')'){
                if(st.size()>0&&st.top()=='(') st.pop();
                else st.push(s[i]);
            }
        }
        int dem1=0,dem2=0;
        while(!st.empty()){
            if(st.top()=='(') dem1++;
            else dem2++;
            st.pop();
        }
        int res=dem1/2+dem2/2+dem1%2+dem2%2;
        cout<<res<<endl;
    }
    return 0;
}