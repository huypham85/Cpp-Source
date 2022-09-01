#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    vector<vector<int>> a(n+1);
    int m;
    cin>>m;
    while(m--){
        int u, v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for(int i=1;i<=n;i++){
        if(a[i].size()){
            cout<<"Dinh ke cua "<<i<<" : ";
            sort(a[i].begin(), a[i].end());
            for(int j=0;j<a[i].size();j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        } 
    }
    return 0;
}