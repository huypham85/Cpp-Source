#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, m;
        map<int,int>d;
        cin>>n>>m;
        int a[n+1], b[m+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
            d[a[i]]++;
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            d[b[i]]++;
        }
        for(int i=0;i<=100000;i++){
            if(d[i]>0) cout<<i<<" ";
        }
        cout<<endl;
        for(int i=0;i<=100000;i++){
            if(d[i]>1) cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}