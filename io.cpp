#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char s;
priority_queue<ll>q;
vector<ll>res;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    
    while(cin>>s){
        if(s=='.') break;
        if(s=='+'){
            ll tmp;
            cin>>tmp;
            if(q.size()<15000){
                q.push(tmp);
            }
        }
        if(s=='-'){
            if(!q.empty()){
                ll tmp1=q.top();
                while(!q.empty() && q.top()==tmp1){
                    q.pop();
                }
            }
        }
    }
    while(!q.empty()){
        if (res.size()==0||q.top()!=res.back())
            res.push_back(q.top());
        q.pop();
    }
    cout<<res.size()<<endl;
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}