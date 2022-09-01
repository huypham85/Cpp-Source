#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int a[1001][1001];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    int n,k;
    while(t--){
        vector<int>res;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
                res.push_back(a[i][j]);
            }
        }
        sort(res.begin(), res.end());
        cout<<res[k-1]<<endl;
    }
    return 0;
}