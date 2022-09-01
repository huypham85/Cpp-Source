#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n, m;
vector<int>ke[1003];
int truoc[1003];
bool visited[1003];

// duyet tung dinh u, neu dinh ke v da visited co truoc[u]!=v => co chu trinh (truoc[u]!=v la de tranh truong hop chu trinh chi co 2 dinh. VD: 1->2, 2->1 => ko co chu trinh)

void init(){
    for(int i=0;i<1003;i++) ke[i].clear();
    memset(truoc,0,sizeof(truoc));
    memset(visited,false,sizeof(visited));
}
bool isCyclic(int u){
    queue<int>q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int tmp = q.front();
        q.pop();
        for(auto v:ke[tmp]){
            if(!visited[v]){
                visited[v] = true;
                q.push(v);
                truoc[v]=tmp;
            }
            else if(truoc[tmp]!=v) return true;
        }
    }
    return false;
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
            ke[v].push_back(u);
        }
        int dd=0;
        for(int i=1;i<=n;i++){
            if(!visited[i] && isCyclic(i)){ // duyet het tat ca cac dinh
                cout<<"YES"<<endl;
                dd=1;
                break;
            }
        }
        if(dd==0) cout<<"NO"<<endl;
    }
    return 0;
}