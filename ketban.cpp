#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<int>ke[100006];
bool visited[100006];
int cnt, res =0;

void dfs(int u){
    visited[u] = true;
    for(int i=0;i<ke[u].size();i++){
        int v = ke[u][i];
        if(visited[v]==false){
            cnt++;
            dfs(v);
        }
    }
    res = max(cnt,res);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<100006;i++) ke[i].clear();
        memset(visited,false,sizeof(visited));
        int n, m;
        cin>>n>>m;
        while(m--){
            int u,v;
            cin>>u>>v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        res =0;
        for(int i=1;i<=n;i++){
           
            if(visited[i]==false){
                cnt =1;
                dfs(i);
            }
        }
        cout<<res<<endl;
    }
    return 0;
}