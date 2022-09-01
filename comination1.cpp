#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t,n;
int a[30];
void Try(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n){
            for(int k=1;k<=n;k++) cout<<a[k];
            cout<<" ";
        }
        else {
            Try(i+1);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        Try(1);
        cout<<endl;
    }
    return 0;
}