#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, k;
vector<int>a(100);
vector<vector<int>>res;
void Try(int i){
    for(int j=1;j<=k;j++){
        a[i]=j;
        if(i==n-1){
            vector<int>tmp;
            for(int x=0;x<=n-1;x++){
                tmp.push_back(a[x]);
            }
            res.push_back(tmp);
        }
        else Try(i+1);
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>k>>n;
    Try(0);
    cout<<res.size()<<endl;
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j];
        }
        cout<<endl;
    }
    return 0;
}