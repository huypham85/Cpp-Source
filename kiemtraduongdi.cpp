#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n, m;
vector<int>ke[1003];
bool visited[1003];
int truoc[1003];
void BFS(int u, int dich){
    queue<int>q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int tmp = q.front();
        q.pop();
        visited[tmp] = true;
        if(tmp==dich){
            cout<<"YES"<<endl;
            return;
        }
        for(int i=0;i<ke[tmp].size();i++){
            int v = ke[tmp][i];
            if(!visited[v]){
                visited[v]=true;
                q.push(v);
            }
        }
    }
    cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<1003;i++) ke[i].clear();
        memset(visited,false,sizeof(visited));
        cin>>n>>m;
        while(m--){
            int u, v;
            cin>>u>>v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        int q;
        cin>>q;
        while(q--){
            int nguon, dich;
            cin>>nguon>>dich;
            memset(visited,false,sizeof(visited));
            BFS(nguon,dich);
        }
    }
    return 0;
}