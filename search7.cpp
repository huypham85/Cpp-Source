#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n, k;
int a[10000];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a, a+n);
        for(int i=0;i<k;i++) cout<<a[n-1-i]<<" ";
        cout<<endl;
    }
    return 0;
}