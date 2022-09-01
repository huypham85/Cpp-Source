#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1][n+1];
        vector<int>ke[n+1];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>a[i][j];
                if(a[i][j]==1) ke[i].push_back(j);
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<ke[i].size();j++){
                cout<<ke[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}