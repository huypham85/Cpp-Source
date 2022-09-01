#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void Try(){
    int n;
    cin>>n;
    string s;
    queue<string>q;
    stack<string>st;
    vector<string>ans;
    q.push("6");
    q.push("8");
    st.push("6");
    st.push("8");
    while(true){
        int len;
        s = q.front();
        q.pop();
        len = s.length();
        while(true){
            st.push(s+"6");
            st.push(s+"8");
            q.push(s+"6");
            q.push(s+"8");
            if(len < q.front().length()) break;
            s = q.front();
            q.pop();
        }
        if(len +1 == n) break;
    }
    cout<<st.size()<<endl;
    while (st.size())
    {
        ans.push_back(st.top());
        //cout<<st.top()<<' ';
        st.pop();
    }
    for(int i=ans.size()-1;i>=0;i--) cout<<ans[i]<<" ";
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        Try();
    }
    return 0;
}