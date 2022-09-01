#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int a[1000006], b[1000006];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, m, k;
        cin>>n>>m>>k;
        vector<int>res;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        for(int i=0;i<n;i++) res.push_back(a[i]);
        for(int i=0;i<m;i++) res.push_back(b[i]);
        sort(res.begin(),res.end());
        cout<<res[k-1]<<endl;
    }
    return 0;
}