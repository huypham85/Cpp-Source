#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, m,dd=0;
vector<vector<int>>a;
int notvisited[100005];
vector<int>res;
void dfs(int u){
    //cout<<u<<" ";
    notvisited[u]=0;
    for(int i=0;i<a[u].size();i++){
        int v=a[u][i];
        if(v==n){
            dd=1;
            return;
        }
        if(notvisited[v]==1&&dd==0){
            dfs(v);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n>>m;
    a.resize(n+1);
    for(int i=1;i<100005;i++) notvisited[i]=1;
    while(m--){
        int u,v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    dfs(1);
    if(dd==1) cout<<"YES";
    else cout<<"NO";
    return 0;
}