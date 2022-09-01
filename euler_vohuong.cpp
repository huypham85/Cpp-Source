#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<int>ke[1005];
bool visited[1005];
int n, m;
// do thi vo huong co chu trinh or duong di euler thi lien thong va cac bac cua dinh deu la chan

void dfs(int u){
    visited[u] = true;
    for(int i=0;i<ke[u].size();i++){
        int v = ke[u][i];
        if(!visited[v]) dfs(v);
    }
}

void solve(){
    dfs(1);
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            cout<<"0"<<endl;
            return;
        }
        if(ke[i].size() % 2 >0) cnt++; // dem so dinh co bac le
    }
    if(cnt == 2) cout<<"1"; // neu co 2 dinh co bac le => co duong di euler(2 dinh co bac le la dinh xuat phat va bat dau)
    else if(cnt == 0) cout<<"2"; // neu tat ca dinh deu co bac chan => co chu trinh euler
    else cout<<"0"; // khac thi ko co euler
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        
        cin>>n>>m;
        for(int i=0;i<1005;i++) ke[i].clear();
        memset(visited,false, sizeof(visited));
        while(m--){
            int u, v;
            cin>>u>>v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        solve();
    }
    return 0;
}