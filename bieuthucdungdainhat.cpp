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
        stack<char>st;
        int res=0;
        for(int i=0;i<s.size();i++){
            if(st.size()==0) st.push(s[i]);
            else if(s[i]==')'){
                if(st.top()=='('&&st.size()>0){
                    st.pop();
                    res+=2;
                }
                else st.push(s[i]);
            }
            else st.push(s[i]);
        }
        cout<<res<<endl;
    }
    return 0;
}