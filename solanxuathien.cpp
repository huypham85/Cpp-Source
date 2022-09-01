#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    int n, k;
    while(t--){
        cin>>n>>k;
        int a[n+1];
        map<int,int>d;
        for(int i=0;i<n;i++){
            cin>>a[i];
            d[a[i]]++;
        }
        if(d[k]>0) cout<<d[k]<<endl;
        else cout<<"-1"<<endl;
        cout<<endl;
    }
    return 0;
}