#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
int t;
int n,m,dem=0;
vector<int>a,b,res;
void Try(vector<int>res,int i, int j){
    if(res.size()==n+m){
        dem++;
        dem%=mod;
        cout<<endl;
        return;
    }
    if(i<a.size()){
        res.push_back(a[i]);
        cout<<a[i]<<" ";
        Try(res,i+1, j);
    }   
    if(j<b.size()){
        res.push_back(b[j]);
        cout<<a[j]<<" ";
        Try(res,i, j+1);
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        dem=0;
        //res.clear();
        a.clear();
        b.clear();
        cin>>n>>m;
        for(int i=1;i<=n;i++) a.push_back(i);
        for(int i=1;i<=m;i++) b.push_back(i);
        Try(res,0,0);
        cout<<dem<<endl;
    }
    return 0;
}