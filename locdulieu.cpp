#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n,k;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--){
        cin>>n;
        int so;
        int a[n+1];
        map<int,int>check;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cin>>k;
        for(int i=0;i<n;i++){
            if(a[i]!=k) cout<<a[i]<<" ";
        }
    }
    return 0;
}