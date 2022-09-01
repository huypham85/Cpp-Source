#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int t,n,x,dd=0;
vector<int>ans;
int a[101];
void out(){
    cout<<"[";
    for(int i=0;i<ans.size();i++){
        if(i!=(ans.size()-1)) cout<<ans[i]<<" ";
        else cout<<ans[i];
    }
    cout<<"]";
}
void Try(int i, int res){
    if(res==x){
        dd=1;
        out();
        return;
    }
    else{
        for(int j=i; j<n;j++){
            if(res+a[j]<=x){
                res+=a[j];
                ans.push_back(a[j]);
                Try(j, res);
                res-=a[j];
                ans.pop_back();
                //cout<<res<<" ";
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        dd=0;
        cin>>n>>x;
        for(int i=0;i<n;i++) cin>>a[i];
        Try(0,0);
        if(dd==0) cout<<"-1";
        cout<<endl;
    }
    return 0;
}