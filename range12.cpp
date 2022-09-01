#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t, n;
    int a[10004];
    int b[10004];
    cin>>t;
    while(t--){
        cin>>n;
        int maxx=-1;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            int sum_a=0,sum_b=0,ans=0;
            for(int j=i;j<n;j++){
                sum_a+=a[j];
                sum_b+=b[j];
                if(sum_a==sum_b) ans=(j-i+1);
                maxx=max(maxx, ans);
            }
        }
        cout<<maxx<<endl;
    }
    return 0;
}