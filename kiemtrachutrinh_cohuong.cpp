#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n, m;
vector<int>ke[1003];
int visited[1003]; // visited[i]=2 : da xet het cac node
int check;

void init(){
    check = 0;
    for(int i=0;i<1003;i++) ke[i].clear();
    memset(visited,0,sizeof(visited));
}
void isCyclic(int u){
    visited[u] = 1;
    for(int i=0;i<ke[u].size();i++){
        if(visited[ke[u][i]]==1){
            check=1;
        }
        if(visited[ke[u][i]]==0){
            isCyclic(ke[u][i]);
        }
    }
    visited[u] =2; // da xet het cac node ke
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        init();
        while(m--){
            int u, v;
            cin>>u>>v;
            ke[u].push_back(v);
        }
        for(int i=1;i<=n;i++){
            if(visited[i]==0) isCyclic(i);
            if(check==1){
                cout<<"YES"<<endl;
                break;
            }
        }
        if(check==0) cout<<"NO"<<endl;
    }
    return 0;
}