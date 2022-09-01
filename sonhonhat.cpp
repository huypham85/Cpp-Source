#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int s, d;
        cin>>s>>d;
        stack<int>st;
        while(s>0){
            if(s>9){
                st.push(9);
                s-=9;
                d--;
            }
            else{
                st.push(s);
                d--;
                break;
            }
        }
        //cout<<d<<endl;
        if(d<0) cout<<"-1"<<endl;
        else{
            if(d>0){
                int top = st.top();
                st.pop();
                st.push(top-1);
                while(d>1){
                    st.push(0);
                    d--;
                }
                st.push(1);
            }
            while(!st.empty()){
                cout<<st.top();
                st.pop();
            }
            cout<<endl;
        }
    }
    return 0;
}