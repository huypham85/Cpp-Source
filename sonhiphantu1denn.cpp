#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n;
void Solve(){
    vector<string>res;
    queue<string>q;
    q.push("1");
    while(!q.empty()&&res.size()<=n){
        string top = q.front();
        q.pop();
        res.push_back(top);
        q.push(top+"0");
        q.push(top+"1");
    }
    for(int i=0;i<n;i++) cout<<res[i]<<" ";
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        Solve();
    }
    return 0;
}