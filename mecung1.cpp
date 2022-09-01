#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t,n;
int a[102][102];
vector<string>res;
bool ok =true;
void in(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cin>>a[i][j];
    }
    res.clear();
    ok=false;
}
void Try(int i, int j, string s){
    int tmp=s.size();
    if(i==1&&j==1&&a[i][j]==0){
        ok =false;
        return;
    }
    if(i==n&&j==n&&a[i][j]==1){
        res.push_back(s);
        ok=true;
        return;
    }
    if(i<n&&a[i+1][j]==1) Try(i+1,j,s+'D');
    if(j<n&&a[i][j+1]==1) Try(i,j+1,s+'R');
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        in();
        Try(1,1,"");
        if(ok==false) cout<<"-1"<<endl;
        else{
            sort(res.begin(),res.end());
            for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}