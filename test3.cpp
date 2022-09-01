#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
string process(string s){ // check neu vi tri truoc dau mo ngoac la '-' thi doi dau
    string res ="";
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') st.push(i);
        if(s[i]==')'){
            int top = st.top();
            st.pop();
            //if(top==0) continue;
           // else if(s[top-1]=='+') continue;
            if(s[top-1]=='-'){
                //cout<<"here"<<endl;
                for(int j=top;j<=i;j++){
                    if(s[j]=='+') s[j] = '-';
                    else if(s[j]=='-'){
                       // cout<<"here2"<<endl;
                        s[j] = '+';
                        //cout<<j<<" "<<s[j]<<endl;
                    }
                }
            }
           // else continue;
        }
        //cout<<s<<endl;
    }
    for(int i=0;i<s.size();i++){
        if(s[i]!='(' && s[i]!=')') res+=s[i];
    }
    // for(char i:s){
    //     if(i!='(' && i!=')') res+=i;
    // }
    return res;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s1, s2;
        cin>>s1>>s2;
        //cout<<endl;
        string s3 = process(s1);
        //cout<<s3<<endl;
        string s4 = process(s2);
        //cout<<s4<<endl;
        if(s3==s4) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}