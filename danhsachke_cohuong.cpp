#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> ke(n+1);
        for(int i=0;i<m;i++){
            int u, v;
            cin>>u>>v;
            ke[u].push_back(v);
           // ke[v].push_back(u);
        }
        for(int i=1;i<=n;i++){
            sort(ke[i].begin(), ke[i].end());
        }
        for(int i=1;i<=n;i++){
            cout<<i<<": ";
            for(int j=0;j<ke[i].size();j++){
                cout<<ke[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}