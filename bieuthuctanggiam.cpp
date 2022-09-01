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
        string res="";
        cin>>s;
        stack<int>st;
        for(int i=0;i<=s.size();i++){
            st.push(i+1);
            if(s[i]=='I'||i==s.size()){
                while(!st.empty()){
                    res+=to_string(st.top());
                    st.pop();
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}