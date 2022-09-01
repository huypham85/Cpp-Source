#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<int>ke[1003];
bool visited[1003];

void DFS(int u){
    cout<<u<<" ";
    visited[u] = true;
    for(int i=0;i<ke[u].size();i++){
        int v = ke[u][i];
        if(!visited[v]) DFS(v);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, m, s;
        cin>>n>>m>>s;
        for(int i=1;i<=1000;i++) ke[i].clear();
        memset(visited,false,sizeof(visited));
        while(m--){
            int u, v;
            cin>>u>>v;
            ke[u].push_back(v);
        }
        DFS(s);
        cout<<endl;
    }
    return 0;
}