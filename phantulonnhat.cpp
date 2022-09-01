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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a, a+n);
        for(int i=n-1;i>=n-k;i--) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}