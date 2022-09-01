#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int a[10000007];

int Solve(int n, int k){
    int cnt =0;
    for(int i=0;i<n;i++){
        if(a[i]<=k) cnt++;
    }
    int bad =0;
    for(int i=0;i<cnt;i++){
        if(a[i]>k) bad++;
    }
    int res = bad;
    for(int i=0,j=cnt;j<n;i++,j++){
        if(a[i]>k) bad--;
        if(a[j]>k) bad++;
        res = min(res, bad);
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<Solve(n, k)<<endl;
    }
    return 0;
}