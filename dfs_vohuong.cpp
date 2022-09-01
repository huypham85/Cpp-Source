#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,dem=0;
vector<vector<int>> a;
int notvisited[10000];
void dfs(int u){
    cout<<u<<" ";
    notvisited[u]=0;
    for(int i=0;i<a[u].size();i++){
        int v=a[u][i]; //dinh ke;
        if(notvisited[v]==1){
            dfs(v);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n>>m;// so dinh, so canh
    a.resize(n+1);
    while(m--){
        for(int i=1;i<=10000;i++) notvisited[i]=1;
        int u, v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);// do thi vo huong
    }
    // x.resize(n+1);
    // int a[n+2][m+2];
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=m;j++){
    //         cin>>a[i][j];
    //         if(a[i][j]==1){
    //             if(i<j){
    //                 x[i].push_back(j);
    //                 x[j].push_back(i);
    //             }
    //         }
    //     }
    // }
    
    // cout<<endl;
    // for(int i=1;i<=13;i++){
    //     if(notvisited[i]==1){
    //         notvisited[i]=0;
    //         dem++;
    //         dfs_stack(i);
    //         cout<<endl;
    //     }
    // }
    //cout<<dem;
    /*for(int i=1;i<=n;i++){
        cout<<i<<" : ";
        for(int j=0;j<x[i].size();j++) cout<<x[i][j]<<" ";
        cout<<endl;
    }*/
    return 0;
}