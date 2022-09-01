#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[1001];
int n;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int L[n+1]={0};
    a[0]=0;
    a[n+1]=10001;
    L[n+1]=1;
    for(int i=n;i>=0;i--){
        int jmax=n+1;
        for(int j=i+1;j<=n+1;j++){
            if(a[j]>a[i]&& L[j]>L[jmax]){
                jmax=j;
            }
            L[i]=L[jmax]+1;
        }
    }
    //for(int i=0;i<=n+1;i++){
        //cout<<L[i]<<" ";
    //}
    sort(L, L+n+2);
    cout<<L[n]-1;
    return 0;
}