#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int a[1000006];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       // int a[n+1];
        map<int,int>d;
        for(int i=0;i<n;i++){
            cin>>a[i];
            d[a[i]]++;
        }
        int res=0;
        sort(a,a+n);
        int l = a[0];
        int r = a[n-1];
        for(int i=l;i<=r;i++){
            if(d[i]==0) res++;
        }
        cout<<res<<endl;
    }
    return 0;
}