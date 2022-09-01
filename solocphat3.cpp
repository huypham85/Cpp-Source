#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void Try(){
    int n;
    cin>>n;
    string s;
    queue<string>q;
    stack<string>st;
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
        cout<<st.top()<<' ';
        st.pop();
    }
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