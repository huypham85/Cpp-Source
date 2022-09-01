#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<int>ke[1003];
bool visited[1003];
int truoc[1003];
vector<int>res;
int n, m, s,e;
void DFS(int u,int e){
    if(visited[e]==true) return;
    visited[u] = true;
    for(int i=0;i<ke[u].size();i++){
        int v = ke[u][i];
        if(!visited[v]){
            truoc[v]=u;
            DFS(v,e);
        }
    }
}

void trace(int dich, int nguon){
    if(!visited[dich]){
        cout<<"-1"<<endl;
        return;
    }
    
    while(dich!=nguon){
        res.push_back(dich);
        dich=truoc[dich];
    }
    res.push_back(nguon);
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
        cin>>n>>m>>s>>e;
        for(int i=1;i<=1000;i++) ke[i].clear();
        memset(visited,false,sizeof(visited));
        memset(truoc,0,sizeof(truoc));
        res.clear();
        while(m--){
            int u, v;
            cin>>u>>v;
            ke[u].push_back(v);
        }
        DFS(s,e);
        trace(e,s);
        
    }
    return 0;
}