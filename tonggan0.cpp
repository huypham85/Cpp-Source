#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++) cin>>a[i];
        int res = a[0]+a[1];
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(abs(a[i]+a[j])<abs(res)) res = a[i]+a[j];
            }
        }
        cout<<res<<endl;
    }
    return 0;
}