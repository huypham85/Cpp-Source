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
        int res=0;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            for(int j = i+1;j<n;j++){
                if(a[i]+a[j]==k) res++;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}