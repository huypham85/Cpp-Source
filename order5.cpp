#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n, a[10004];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        int maxx=-1;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n-1;i++){
            int sum=0;
            for(int j=i+1;j<n;j++){
                if(a[j]>a[i]){
                    sum= a[j]- a[i];
                    maxx = max(sum, maxx);
                }
            }
        }
        cout<<maxx<<endl;
    }
    return 0;
}