#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n, x;
int a[1000];
vector<vector<int>>res;

void Try(int i, int sum,vector<int>tmp){
    if(sum>x) return;
    else if(sum==x){
        res.push_back(tmp);
        return;
    }
    else{
        for(int j=i;j<n;j++){
            if(sum+a[j]<=x){
                tmp.push_back(a[j]);
                Try(j,sum+a[j],tmp);
                tmp.pop_back();
            }
        }
    }
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>x;
        res.clear();
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        vector<int>tmp;
        tmp.clear();
        Try(0,0,tmp);
        if(res.size()==0) cout<<"-1"<<endl;
        else{
           // cout<<res.size()<<endl;
            for(int i=0;i<res.size();i++){
                cout<<"[";
                for(int j=0;j<res[i].size();j++){
                    if(j!=res[i].size()-1) cout<<res[i][j]<<" ";
                    else cout<<res[i][j]<<"]";
                }
               // cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}