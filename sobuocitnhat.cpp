#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n;
int a[1001];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        int f[n+1];
        int res=0;
        for(int i=0;i<n;i++){
            f[i]=1;
            for(int j=0;j<i;j++){
                if(a[i]>=a[j]){
                    f[i]= max(f[i], f[j]+1);
                }
            }
            res = max(res, f[i]);
        }
        cout<<n-res<<endl;
    }
    return 0;
}