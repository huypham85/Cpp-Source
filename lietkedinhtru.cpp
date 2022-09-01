#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n, m;// n dinh,m canh
vector<int> ke[1005];
bool visited[1005];
int tplt; // so thanh phan lien thong ban dau

void BFS(int u){
    queue<int>q;
    q.push(u);
    while(!q.empty()){
        int tmp = q.front();
        visited[tmp]=true;
        q.pop();
        for(int i=0;i<ke[tmp].size();i++){
            if(visited[ke[tmp][i]]==false){
                visited[ke[tmp][i]]==true;
                q.push(ke[tmp][i]);
            }
        }
    }
}

int TPLT(){
    int res=0;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            res++;
            BFS(i);
        }
    }
    return res;
}

void re_init(){
    for(int i=0;i<1005;i++){
        ke[i].clear();
    }
    memset(visited,false,sizeof(visited));
}

void DinhTru(int i){
    memset(visited,false,sizeof(visited));
    visited[i]=true;
    int dem=0;
    for(int j=1;j<=n;j++){
        if(!visited[j]){
            BFS(j);
            dem++;
        }
    }
    if(dem>tplt) cout<<i<<" ";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        re_init();
        for(int i=0;i<m;i++){
            int u, v;
            cin>>u>>v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        tplt = TPLT();
        //cout<<tplt<<endl;
        for(int i=1;i<=n;i++){
            DinhTru(i);
        }
        cout<<endl;
    }
    return 0;
}