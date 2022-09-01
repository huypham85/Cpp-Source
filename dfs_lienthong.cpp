#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,dem=0;
vector<int>a[1007];
int notvisited[1007];
void dfs(int u){
    notvisited[u]=0;
    for(int i=0;i<a[u].size();i++){
        if(notvisited[a[u][i]]==1) dfs(a[u][i]);
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
        for(int i=0;i<1001;i++) a[i].clear();
        for(int i=1;i<=1005;i++) notvisited[i]=1;
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
                dfs(i);
                //cout<<endl;
            }
        }
        cout<<dem<<endl;
    }
    return 0;
}