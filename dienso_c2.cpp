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
        int check[10003]={0};
        for(int i=0; i<n; i++){
            cin>>a[i];
            check[a[i]]++;
        }
        sort(a,a+n);
        int dem=0;
        for(int i=a[0];i<=a[n-1];i++){
            cout<<check[i]<<" ";
            if(check[i]==0) dem++;
        }
        cout<<endl;
        cout<<dem<<endl;
    }
    return 0;
}