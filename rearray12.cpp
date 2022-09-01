#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n;
int a[10001];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        ll maxx= -1;
        for(int i=0;i<n-1;i++){
            ll tmp=1;
            tmp*=a[i];
            for(int j=i+1;j<n;j++){
                tmp*=a[j];
                maxx = max (maxx, tmp);
            }
        }
        ll so = a[n-1];
        maxx = max(maxx, so);
        cout<<maxx<<endl;
    }
    return 0;
}