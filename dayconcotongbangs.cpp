#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, s;
        int a[205];
        int f[40005]={0};
        cin>>n>>s;
        f[0]=1;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            for(int j=s;j>=a[i];j--){
                if(f[j]==0 && f[j-a[i]]==1) f[j]=1;
            }
        }
        if(f[s]==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}