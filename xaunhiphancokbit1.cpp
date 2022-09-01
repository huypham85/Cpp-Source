#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n, k;
int a[100];

void out(){
    int dem=0;
    for(int i=0;i<n;i++){
        if(a[i]==1) dem++;
    }
    if(dem==k){
        for(int i=0;i<n;i++){
            cout<<a[i];
        }
        cout<<endl;
        //cout<<dem<<endl;
    }
}

void Try(int i){
    if(i>=n){
        out();
    }
    else{
        for(int j=0;j<=1;j++){
            a[i]=j;
            Try(i+1);
        }
    }
    

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        Try(0);
    }
    return 0;
}