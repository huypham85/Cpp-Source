#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    deque<int>q;
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        if(s=="PUSHBACK"){
            int tmp;
            cin>>tmp;
            q.push_back(tmp);
        }
        if(s=="PUSHFRONT"){
            int tmp;
            cin>>tmp;
            q.push_front(tmp);
        }
        if(s=="POPBACK"&&!q.empty()){
            if(q.size())
                q.pop_back();
        }
        if(s=="POPFRONT"&&!q.empty()){
            if(q.size())
                q.pop_front();
        }
        if(s=="PRINTBACK"){
            if(q.size()) cout<<q.back()<<endl;
            else cout<<"NONE"<<endl;
        }
        if(s=="PRINTFRONT"){
            if(q.size()) cout<<q.front()<<endl;
            else cout<<"NONE"<<endl;
        }
    }
    return 0;
}