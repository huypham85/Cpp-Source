#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t,n;
int a[1001][1001];
vector<string>res;
bool ok =true;
bool check[1001][1001];
void in(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            check[i][j]=false;
        }
    }
    res.clear();
    ok=false;
}
void Try(int i, int j, string s){
    if(i==1&&j==1&&a[i][j]==0){
        ok =false;
        return;
    }
    if(i==n&&j==n&&a[i][j]==1){
        res.push_back(s);
        ok=true;
        return;
    }
    if(i<n&&a[i+1][j]==1&&!check[i+1][j]){
        check[i][j]=true;
        Try(i+1,j,s+'D');
        check[i][j]=false;
    }
    if(j<n&&a[i][j+1]==1&&!check[i][j+1]){
        check[i][j]=true;
        Try(i,j+1,s+'R');
        check[i][j]=false;
    }
    if(j>1&&a[i][j-1]==1&&!check[i][j-1]){
        check[i][j]=true;
        Try(i,j-1,s+'L');
        check[i][j]=false;
    }
    if(i>1&&a[i-1][j]==1&&!check[i-1][j]){
        check[i][j]=true;
        Try(i-1,j,s+'U');
        check[i][j]=false;
    }
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