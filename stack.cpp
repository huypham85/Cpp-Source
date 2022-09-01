#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    string s;
   stack<int>st;
    while(cin>>s){
        
        if(s=="end") return 0;
        if(s=="init"){
            stack<int>st;
        }
        if(s=="show"){
            vector<int>a;
            if(st.size()==0){
                cout<<"empty"<<endl;
            }
            else{
                while(!st.empty()){
                    a.push_back(st.top());
                    st.pop();
                }
                reverse(a.begin(),a.end());
                for(int i=0;i<a.size();i++){
                    cout<<a[i]<<" ";
                    st.push(a[i]);
                }
                cout<<endl;
            }
        }
        if(s=="push"){
            int tmp;
            cin>>tmp;
            st.push(tmp);
        }
        if(s=="pop"){
            if(st.size())
                st.pop();
        }
        if(s=="top"){
            if(st.size()) cout<<st.top()<<endl;
            else cout<<"-1"<<endl;
        }
        if(s=="size"){
            cout<<st.size()<<endl;
        }
    }
    return 0;
}