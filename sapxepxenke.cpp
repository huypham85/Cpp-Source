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
        sort(a, a+n);
        int i,j;
        for( i=0,j=n-1;i<j;i++,j--){
            cout<<a[j]<<" "<<a[i]<<" ";
        }
        if(i==j) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}