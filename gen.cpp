#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
string dad, mom;
vector<string>res,ans;

void Try(int i, string tmp){
    if(tmp.size()==n){
        res.push_back(tmp);
        return;
    }
    Try(i+1, tmp+dad[i]);
    Try(i+1, tmp+mom[i]);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    cin>>dad>>mom;
    Try(0, "");
    sort(res.begin(), res.end());
    ans.push_back(res[0]);
    for(int i=1;i<res.size();i++){
        if(res[i]!=res[i-1]) ans.push_back(res[i]);
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}