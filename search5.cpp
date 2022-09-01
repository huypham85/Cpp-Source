#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n;
int a[10000001];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        if(a[0]!=a[1]) cout<<a[0]<<" "<<a[1]<<endl;
        else cout<<"-1"<<endl;
    }
    return 0;
}