#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int t, n;
vector<int>ans;
vector<vector<int> >vt;
void out(){
    cout<<vt.size()<<endl;
    for(int i=0;i<vt.size();i++){
        cout<<"(";
        for(int j=0;j<vt[i].size();j++){
            if(j!=(vt[i].size()-1)) cout<<vt[i][j]<<" ";
            else cout<<vt[i][j];
        }
        cout<<") ";
    }
}
void Try(int i, int res){
    if(res==n){
        vt.push_back(ans);
        return;
    }
    else{
        for(int j=i; j>=1;j--){
            if(res+j<=n){
                res+=j;
                ans.push_back(j);
                //cout<<j<<" ";
                Try(j, res);
                res-=j;
                ans.pop_back();
                //cout<<res<<" ";
            }
            //else break;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        vt.clear();
        ans.clear();
        for(int i=n;i>=1;i--){
            //cout<<i<<" ";
            ans.push_back(i);
            Try(i,i);
            ans.pop_back();
        }
        out();
        cout<<endl;
    }
    return 0;
}