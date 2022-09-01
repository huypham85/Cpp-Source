#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n;
int a[10005];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        int b[n+1];
        b[0]=a[0]*a[1];
        b[n-1]= a[n-1]*a[n-2];
        for(int i=1;i<n-1;i++){
            b[i]= a[i-1]*a[i+1];
        }
        for(int i=0;i<n;i++) cout<<b[i]<<" ";
        cout<<endl;
    }
    return 0;
}