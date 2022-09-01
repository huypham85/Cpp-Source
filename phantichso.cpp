#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int t, n;
vector<int>ans;
void out(){
    cout<<"(";
    for(int i=0;i<ans.size();i++){
        if(i!=(ans.size()-1)) cout<<ans[i]<<" ";
        else cout<<ans[i];
    }
    cout<<") ";
}
void Try(int i, int res){
    if(res==n){
        //cout<<") ";
        out();
        //cout<<endl;
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
        for(int i=n;i>=1;i--){
            //cout<<i<<" ";
            ans.push_back(i);
            Try(i,i);
            ans.pop_back();
        }
        cout<<endl;
    }
    return 0;
}