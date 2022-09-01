#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t, n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int res=0;
        int a[n+1];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a, a+n);
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if((a[i]+a[j])==k) res++;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}