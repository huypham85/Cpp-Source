#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, k,dem=0;
vector<vector<int>>a;
int notvisited[100005];
vector<int>res;
void dfs(int u){
    //cout<<u<<" ";
    dem++;
    notvisited[u]=0;
    for(int i=0;i<a[u].size();i++){
        int v=a[u][i];
        if(notvisited[v]==1){
            dfs(v);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n>>k;
    a.resize(n+1);
    for(int i=1;i<100005;i++) notvisited[i]=1;
    for(int i=1;i<=n;i++){
        int tmp;
        cin>>tmp;
        for(int j=0;j<tmp;j++){
            int so;
            cin>>so;
            a[i].push_back(so);
            a[so].push_back(i);
        }
    }
    dfs(k);
    /*sort(res.begin(),res.end());
    cout<<res.size()<<endl;
    for(int i=0;i<res.size();i++) cout<<res[i]<<" ";*/
    cout<<dem<<endl;
    for(int i=1;i<=n;i++){
        if(notvisited[i]==0) cout<<i<<" ";
    }
    return 0;
}