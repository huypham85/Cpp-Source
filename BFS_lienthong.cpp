#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,dem=0;
vector<vector<int>> a;
int notvisited[100007];
void bfs(int u){
    queue<int>q;
    q.push(u);
    notvisited[u]=0;
    while(!q.empty()){
        int x=q.front();
        //cout<<q.front()<<" ";
        q.pop();
        for(int i=0;i<a[x].size();i++){
            int v=a[x][i];
            if(notvisited[v]==1){
                q.push(v);
                notvisited[v]=0;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        dem=0;
        a.clear();
        a.resize(n+1);
        for(int i=1;i<=100005;i++) notvisited[i]=1;
        while(m--){
            int u, v;
            cin>>u>>v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        for(int i=1;i<=n;i++){
            if(notvisited[i]==1){
                notvisited[i]=0;
                dem++;
                bfs(i);
                //cout<<endl;
            }
        }
        cout<<dem<<endl;
    }
    return 0;
}