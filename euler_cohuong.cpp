#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

// dieu kien de do thi co huong co chu trinh euler la cac dinh deu co ban bac ra = ban bac vao
vector<int>ke[1005];
int n, m;
int DegIn(int k){ // tim ban bac vao
    int cnt=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<ke[i].size();j++){
            if(ke[i][j]==k) cnt++;
        }
    }
    return cnt;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        
        cin>>n>>m;
        for(int i=0;i<1005;i++) ke[i].clear();
        while(m--){
            int u, v;
            cin>>u>>v;
            ke[u].push_back(v);
        }
        int cnt =0;
        for(int i=1;i<=n;i++){
            if(DegIn(i)==ke[i].size()) cnt++; // ban bac ra = ban bac vao
        }
        if(cnt==n) cout<<"1";
        else cout<<"0";
        cout<<endl;
    }
    return 0;
}