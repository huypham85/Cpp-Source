#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n, k;
int a[102];
int b[102];
int res;
bool check(){
    for(int i=2;i<=k;i++){
        if(a[b[i]]<=a[b[i-1]]) return false;
    }
    // for(int i=1;i<=k;i++) cout<<a[b[i]]<<" ";
    // cout<<endl;
    return true;
}

void Try(int i){
    for(int j=b[i-1]+1;j<=(n-k+i);j++){
        b[i]=j;
        if(i==k){
            if(check()) res++;
        }
        else Try(i+1);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--){
        cin>>n>>k;
        res=0;
        for(int i=1;i<=n;i++) cin>>a[i];
        b[0]=0;
        Try(1);
        cout<<res;
    }
    return 0;
}