#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n+1];
        map<int,int>check;
        for(int i=0; i<n; i++){
            cin>>a[i];
            check[a[i]]++;
        }
        cout<<check[k]<<endl;
    }
    return 0;
}