#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n;
int a[100005];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int f[10005]; // f[i] la tong lon nhat khi xet den i
        int res=0;
        for(int i=0;i<n;i++){
            f[i] = a[i];
            for(int j=0;j<i;j++){
                if(a[i]>a[j]) f[i]=max(f[i],f[j]+a[i]);
            }
            res=max(res,f[i]);
        }
        cout<<res<<endl;
    }
    return 0;
}