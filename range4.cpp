#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n, a[1000006];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        ll maxx=-1;
        ll sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            maxx = max(maxx, sum);
            if(sum<0) sum=0;
        }   
        cout<<maxx<<endl;
    }
    return 0;
}