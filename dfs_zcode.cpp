#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n, m, e;
bool visited[10000];
vector<vector<int>>ke(10000);
void dfs(int u){
    cout<<u<<" ";
    visited[u]=true;
    for(int i=0;i<ke[u].size();i++){
        int v = ke[u][i];
        if(visited[v]==false){
            dfs(v);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m>>e;
        for(int i=0;i<10000;i++){
            ke[i].clear();
        }
        for(int i=0;i<10000;i++) visited[i]=false;
        while(m--){
            int u, v;
            cin>>u>>v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        dfs(e);
        cout<<endl;
    }
    return 0;
}