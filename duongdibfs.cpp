#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,s,dich;
vector<int> a[1003];
int notvisited[10000];
int truoc[1003];
void bfs(int u,int dich){
    queue<int>q;
    q.push(u);
    notvisited[u]=0;
    while(!q.empty()){
        if(notvisited[dich]==0) return;
        int x=q.front();
        //cout<<q.front()<<" ";
        q.pop();
        for(int i=0;i<a[x].size();i++){
            int v=a[x][i];
            if(notvisited[v]==1){
                q.push(v);
                truoc[v]=x;
                notvisited[v]=0;
            }
        }
    }
}
void trace(int u , int v){
    if(notvisited[u]==1){
        cout<<"-1"<<endl;
        return;
    }
    vector<int>res;
    while(u!=v){
        res.push_back(u);
        u = truoc[u];
    }
    res.push_back(v);
    reverse(res.begin(),res.end());
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m>>s>>dich;
        for(int i=0;i<1003;i++) a[i].clear();
        for(int i=1;i<10000;i++) notvisited[i]=1;
        memset(truoc,0,sizeof(truoc));
        while(m--){
            int u, v;
            cin>>u>>v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        // for(int i=1;i<=n;i++){
        //     if(notvisited[i]==1){
        //         notvisited[i]=0;
        //         dem++;
        //         bfs(i);
        //     }
        // }
        // cout<<dem;
        bfs(s,dich);  
        trace(dich, s);
    }
    
    return 0;
}