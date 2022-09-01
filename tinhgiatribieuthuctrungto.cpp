#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int prior(char c){
    if(c == '+'||c == '-') return 1;
    if(c == '*'||c == '/') return 2;
    if(c=='(') return 0;
}
vector<string> after(string s){
    stack<char>st;
    string tmp ="";
    vector<string>res;
    for(char &i:s){
        if(i == '(') st.push(i);
        else if(isdigit(i)){
            tmp +=i;
        }
        else if(i == '+'||i=='-' ||i=='*'||i=='/'){
            if(tmp!="") res.push_back(tmp);
            tmp = "";
            while(!st.empty()&&(prior(i)<=prior(st.top()))){
                res.push_back(string(1,st.top()));
                st.pop();
            }
            st.push(i);
            
        }
        else if(i==')'){
            if(tmp!="") res.push_back(tmp);
            tmp="";
            while(st.top()!='('){
                res.push_back(string(1,st.top()));
                st.pop();
            }
            st.pop();
        }
    }
    if(tmp!="") res.push_back(tmp);
    while(!st.empty()){
        res.push_back(string(1,st.top()));
        st.pop();
    }
    return res;
}

ll to_Int(string s){
    ll res =0;
    for(char &i:s){
        res = res *10 + (i-'0');
    }
    return res;
}

void process(vector<string>s){
    stack<ll>st;
    for(string &i:s){
        if(i=="+"||i=="-"||i=="*"||i=="/"){
            ll tmp1 = st.top();
            st.pop();
            ll tmp2 = st.top();
            st.pop();
            if(i=="+") st.push(tmp1+tmp2);
            if(i=="-") st.push(tmp2-tmp1);
            if(i=="*") st.push(tmp2*tmp1);
            if(i=="/") st.push(tmp2/tmp1);
        }
        else st.push(to_Int(i));
    }
    cout << st.top() << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        cin>>s;
        vector<string>res = after(s);
    //    for(string &i:res) cout<<i<<" ";
    //    cout<<endl;
        process(res);
    }
    return 0;
}