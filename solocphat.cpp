#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n;
int a[100];
vector<vector<int>>res;
void Solve(){
    vector<int>b(n);
    // for(int i=0;i<n;i++){
    //     cout<<a[i];
    // }
    // cout<<endl;
    for(int i=0;i<n;i++){
        if(a[i]==0) b[i]=6;
        else b[i]=8;
    }
    res.push_back(b);
    b.clear();
}
void Try(int i){
    if(i>=n){
        Solve();
    }
    else{
        for(int j=0; j<=1;j++){
            a[i]=j;
            Try(i+1);
        }
    }
    
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        res.clear();
        Try(0);
        cout<<res.size()<<endl;
        for(int i=0;i<res.size();i++){
            for(int j=0;j<res[i].size();j++){
                cout<<res[i][j];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}