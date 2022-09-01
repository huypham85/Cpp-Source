#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n,k;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int>a;
        a.resize(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        cout<<a[k-1]<<endl;
    }
    return 0;
}