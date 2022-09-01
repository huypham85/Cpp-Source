#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, k;
int a[1005];
int f[1005][1005];// do dai day con lon nhat co tong la j+k, va chon tu a1->ai
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<k;i++){
        f[0][i]=-1005;
    }    
    f[0][0]=0;
    for(int i=1;i<=n;i++){
        a[i]=a[i]%k;
        for(int j=0;j<k;j++){
            f[i][j]=max(f[i-1][j], f[i-1][(j+k-a[i])%k]+1);
        }
    }
    cout<<f[n][0];
    return 0;
}