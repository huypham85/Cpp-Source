#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
string s;
deque<char>q;
int main(){
    cin>>n;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(q.empty()) q.push_back(s[i]);
        else if(s[i]==q.back()){
            while(!q.empty()&&s[i]==q.back()){
                q.pop_back();
            }
        }
        else q.push_back(s[i]);
    }
    while(!q.empty()){
        cout<<q.front();
        q.pop_front();
    }
    return 0;
}