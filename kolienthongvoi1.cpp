#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<int>ke[1005];
bool visited[1005];
void dfs(int u){
    //cout << u<<" ";
    visited[u] = true;
    for(int i=0;i<ke[u].size();i++){
        int v=ke[u][i];
        if(!visited[v]) dfs(v);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        memset(visited,false,sizeof(visited));
        for(int i=0;i<1005;i++){
            ke[i].clear();
        }
        while(m--){
            int u, v;
            cin>>u>>v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        dfs(1);
        vector<int>res;
        for(int i=1;i<=n;i++){
            if(visited[i]==false) res.push_back(i);
        }
        if(res.size()==0) cout<<"0";
        else{
            for(int i:res) cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}