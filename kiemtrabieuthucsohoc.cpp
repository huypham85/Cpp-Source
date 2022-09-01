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
        getline(cin,s);
        stack<char>st;
        int dd=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==')'){
                dd=0;
                char top = st.top();
                st.pop();
                while(top!='('){
                    if(top=='+'||top=='-'||top=='*'||top=='/'){
                        dd=1;
                    }
                    top = st.top();
                    st.pop();
                }
                if(dd==0) break;
            }
            else st.push(s[i]);
        }
        if(dd==0) cout<<"Yes";
        else cout<<"No";
        cout<<endl;
    }
    return 0;
}