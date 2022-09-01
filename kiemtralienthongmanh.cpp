#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n, m;
vector<int>ke[1004];
bool visited[1004];
void BFS(int u){
    queue<int>q;
    q.push(u);
    while(q.size()>0){
        int top =q.front();
        q.pop();
        visited[top] = true;
        for(int i=0;i<ke[top].size();i++){
            if(visited[ke[top][i]]==false){
                visited[ke[top][i]]==true;
                q.push(ke[top][i]);
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<1004;i++){
            ke[i].clear();
        }
        memset(visited,false,sizeof(visited));
        while(m--){
            int u, v;
            cin>>u>>v;
            ke[u].push_back(v);
        }
        int dem=0;
        for(int i=1;i<=n;i++){
            if(visited[i]==false){
                dem++;
                BFS(i);
            }
        }
        if(dem>1) cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }
    return 0;
}