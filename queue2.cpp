#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    queue<int>st;
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        if(s=="PUSH"){
            int tmp;
            cin>>tmp;
            st.push(tmp);
        }
        if(s=="POP"&&!st.empty()){
            if(st.size())
                st.pop();
        }
        if(s=="PRINTFRONT"){
            if(st.size()) cout<<st.front()<<endl;
            else cout<<"NONE"<<endl;
        }
    }
    return 0;
}