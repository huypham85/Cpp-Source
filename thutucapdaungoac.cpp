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
        stack<int>st;
        vector<int>res;
        int index=1;
        for(char i:s){
            if(i=='('){
                st.push(index);
                res.push_back(index);
                index++;
            }
            else if(i==')'){
                if(!st.empty()){
                    int tmp = st.top();
                    st.pop();
                    res.push_back(tmp);
                }
            }
            else continue;
        }
        for(int i:res){
            cout<<i<<' ';
        }
        cout<<endl;
    }
    return 0;
}