#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n,k;
int a[100],b[100];
vector<vector<int>>ans;
void out(){
    int sum=0;
    vector<int>res;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            sum+=b[i];
            res.push_back(b[i]);
        } 
    }
    if(sum==k){
        ans.push_back(res);
    }
    res.clear();
}

void Try(int i){
    if(i>=n){
        out();
    }
    else{
        for(int j=0;j<=1;j++){
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
        cin>>n>>k;
        ans.clear();
        for(int i=0;i<n;i++) cin>>b[i];
        sort(b,b+n);
        Try(0);
        if(ans.size()==0) cout<<"-1"<<endl;
        else{
            sort(ans.begin(),ans.end());
            for(int i=0;i<ans.size();i++){
                cout<<"[";
                for(int j=0;j<ans[i].size();j++){
                    if(j==ans[i].size()-1) cout<<ans[i][j]<<"]";
                    else cout<<ans[i][j]<<" ";
                }
                cout<<" ";
            }
            cout<<endl;
        }
        
    }
    return 0;
}