#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int a[10005];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        map<int,int>dd;
        for(int i=0;i<n;i++){
            cin>>a[i];
            dd[a[i]]++;
        }
        if(dd[k]==0) cout<<"-1"<<endl;
        else cout<<dd[k]<<endl;
    }
    return 0;
}