#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, dd=0;
int a[100000];
int tanso[100000]={0};
void nhap(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        tanso[a[i]]++;
    }
}
void solve(){
    for(int i=0;i<n;i++){
        if(tanso[a[i]]==1){
            dd=1;
            cout<<a[i]<<" ";
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    nhap();
    solve();
    if(dd==0) cout<<"0";
    return 0;
}