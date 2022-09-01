#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        queue<string>q;
        q.push("6");
        q.push("8");
        vector<string>res;
        while(!q.empty()&&q.front().size()<=n){
            string top = q.front();
            q.pop();
            res.push_back(top);
            q.push(top+"6");
            q.push(top+"8");
        }
        reverse(res.begin(), res.end());
        for(string i:res) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}