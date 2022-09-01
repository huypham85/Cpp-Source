#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n, m;// n dinh,m canh
vector<int> ke[1005];
vector<pair<int,int>>ans;
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

void CanhCau(int canh, vector<pair<int,int>>edge){
    for(int i=0;i<m;i++){
        if(i!=canh){
            ke[edge[i].first].push_back(edge[i].second);
            ke[edge[i].second].push_back(edge[i].first);
        }
    }
    int dem = TPLT();
    if(dem>tplt){
        if(edge[canh].first>edge[canh].second){
            ans.push_back({edge[canh].second,edge[canh].first});
        }
        if(edge[canh].first<edge[canh].second){
            ans.push_back({edge[canh].first,edge[canh].second});
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ans.clear();
        cin>>n>>m;
        vector<pair<int,int>> edge;
        re_init();
        for(int i=0;i<m;i++){
            int u, v;
            cin>>u>>v;
            edge.push_back({u,v});
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        tplt = TPLT();
        //cout<<tplt<<endl;
        for(int i=0;i<m;i++){
            re_init();
            CanhCau(i, edge);
        }
        //cout<<ans.size()<<endl;
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            cout<<ans[i].first<<" "<<ans[i].second<<" ";
        }
        cout<<endl;
    }
    return 0;
}