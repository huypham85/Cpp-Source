#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n, m;
vector<int>ke[1002];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--){
        cin>>n;
        cin.ignore();
        for(int i=1;i<=n;i++){
            string s;
            getline(cin,s);
            s+=" ";
            int so=0;
            for(char j:s){
                if(j>='0'&&j<='9'){
                    so= so*10+(j-'0');
                }
                else if(so>0){
                    ke[i].push_back(so);
                    so=0;
                }
            }
        }
        // for(int i=1;i<=n;i++){
        //     for(int j=0;j<ke[i].size();j++){
        //         cout<<ke[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        int a[n+1][n+1]={0};
        for(int i=1;i<=n;i++){
            if(ke[i].size()>0){
                for(int j=0;j<ke[i].size();j++){
                    a[i][ke[i][j]]=1;
                }
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}