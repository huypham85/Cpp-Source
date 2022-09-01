#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a, a+n);
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}