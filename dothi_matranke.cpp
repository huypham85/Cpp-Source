#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
typedef long long ll;
int n,m;
//n: so dinh
// m: so canh
int banbacra[1000000]={0};
int banbacvao[1000000]={0};
vector<vector<int>> x(100000);
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n>>m;
    int a[n+2][m+2];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                if(i<j){
                    x[i].push_back(j);
                    x[j].push_back(i);
                }
            }
        }
    }
    /*while(m--){
        int u, v;
        cin>>u>>v;
        a[u][v]=1;// do thi co huong

        banbacra[u]++;
        banbacvao[v]++;
        dinhra[u].push_back(v);
        dinhvao[v].push_back(u);
        //a[v][u]=1// neu do thi la do thi vo huong
    }
    /*for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }*/
    
    /*for(int i=1;i<=n;i++){
        cout<<"ban bac ra cua "<<i<<": "<<banbacra[i]<<": ";
        for(int j=0;j<dinhra[i].size();j++){
            cout<<dinhra[i][j]<<",";
        }
        cout<<endl;
        cout<<"ban bac vao cua "<<i<<": "<<banbacvao[i]<<": ";
        for(int j=0;j<dinhvao[i].size();j++){
            cout<<dinhvao[i][j]<<",";
        }
        cout<<endl;
        cout<<endl;
    }*/
    for(int i=1;i<=n;i++){
        cout<<i<<" : ";
        for(int j=0;j<x[i].size();j++) cout<<x[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}