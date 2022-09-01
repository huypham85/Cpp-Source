#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;// so dinh
    vector<vector<int>> a(n+1);
    // neu u ke v 
    int m;// so canh
    cin>>m;
    while(m--){
        int u, v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);// do thi vo huong
    }
    for(int i=1;i<=n;i++){
        cout<<"bac cua dinh"<<i<<": ";
        cout<<a[i].size();
        cout<<endl;
    }
    /*for(int i=1;i<=n;i++){
        cout<<"cac dinh ke voi dinh "<<i<<":";
        for(int j=0;j<a[i].size();j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }*/
    return 0;
}