#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n, m, e,dich;
bool visited[10000];
vector<vector<int>>ke(10000);
int truoc[10000];
void dfs(int u,int dich){
    //cout<<u<<" ";
    if(visited[dich]==true) return;
    visited[u]=true;
    for(int i=0;i<ke[u].size();i++){
        int v = ke[u][i];
        if(visited[v]==false){
            truoc[v]=u;
            dfs(v,dich);
        }
    }
}
void trace(int u, int v){
    if(visited[v]==false){
        cout<<"-1"<<endl;
        return;
    }
    vector<int>res;
    while(u!=v){
        res.push_back(u);
        u = truoc[u];
    }
    res.push_back(v);
    reverse(res.begin(),res.end());
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<' ';
    }
    cout<<endl;
    
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m>>e>>dich;
        for(int i=0;i<10000;i++){
            ke[i].clear();
        }
        for(int i=0;i<10000;i++) visited[i]=false;
        memset(truoc, 0, sizeof(truoc));
        while(m--){
            int u, v;
            cin>>u>>v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        dfs(e,dich);
        trace(dich,e);
    }
    return 0;
}