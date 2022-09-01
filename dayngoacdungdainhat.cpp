#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    //cin.ignore();
    while(t--){
        string s;
        cin>>s;
        stack<int> st;
        st.push(-1);
        int res=0;
            for(int i=0;i<s.size();i++){
                if(s[i]=='[') st.push(i);
                else{
                    st.pop();
                    if(st.size()>0) res=max(res, i-st.top());
                    if(st.size()==0) st.push(i);
                }
            }
            cout<<res<<endl;
    }
    return 0;
}