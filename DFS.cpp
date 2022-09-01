#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,dem=0;
vector<vector<int>> x;
int notvisited[10000];
void dfs(int u){
    cout<<u<<" ";
    notvisited[u]=0;
    for(int i=0;i<x[u].size();i++){
        int v=x[u][i]; //dinh ke;
        if(notvisited[v]==1){
            dfs(v);
        }
    }
}
void dfs_stack(int u){
    stack<int>st;
    st.push(u);
    notvisited[u]=0;
    cout<<u<<" ";
    while(!st.empty()){
            // u=st.top();
        st.pop();
        for(int i=x[u].size()-1;i>=1;i--){
            int v=x[u][i];
            if(notvisited[v]==1){
                notvisited[v]=0;
                cout<<v<<" ";
                //st.push(u);
                st.push(v);
            }
        }
    } 
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n>>m;// so dinh, so canh
    //a.resize(n+1);
    /*while(m--){
        int u, v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);// do thi vo huong
    }*/
    x.resize(n+1);
    int a[n+2][m+2];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                if(i<j){
                    x[i].push_back(j);
                    x[j].push_back(i);
                }
            }
        }
    }
    for(int i=1;i<=10000;i++) notvisited[i]=1;
    cout<<endl;
    for(int i=1;i<=13;i++){
        if(notvisited[i]==1){
            notvisited[i]=0;
            dem++;
            dfs_stack(i);
            cout<<endl;
        }
    }
    cout<<dem;
    /*for(int i=1;i<=n;i++){
        cout<<i<<" : ";
        for(int j=0;j<x[i].size();j++) cout<<x[i][j]<<" ";
        cout<<endl;
    }*/
    return 0;
}