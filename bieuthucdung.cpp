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
        int deleted=0;
        int res =0;
        for(char i:s){
            if(st.size()==0) st.push(i);
            else if (st.top()=='['&&i==']'){
                st.pop();
                deleted+=2;
            }
            else if(st.top()==']'&&i=='['){
                res += st.size()+deleted;
                st.pop();
            }
            else if(i=='[') st.push(i);
            else if(i==']'&&st.top()==']'){
                st.push(i);
            }
            if(st.size()==0) deleted=0;
        }
        cout<<res<<endl;
    }
    return 0;
}