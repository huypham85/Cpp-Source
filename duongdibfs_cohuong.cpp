#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<int>ke[1003];
bool visited[1003];
int truoc[1003];
vector<int>res;
int n, m, s,e;
void BFS(int u, int e){
    queue<int>q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int tmp = q.front();
        q.pop();
        for(int i=0;i<ke[tmp].size();i++){
            int v = ke[tmp][i];
            if(!visited[v]){
                visited[v] = true;
                q.push(v);
                truoc[v] =tmp;
            }
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
        BFS(s,e);
        trace(e,s);
        
    }
    return 0;
}