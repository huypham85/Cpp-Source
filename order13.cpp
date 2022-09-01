#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n, m;
int a[10004], b[10004];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];

        int sum_a[n+1]={0}, sum_b[m+1]={0};
        sum_a[0] = a[0];
        for(int i=1;i<n;i++) sum_a[i]=sum_a[i-1]+a[i];
        sum_b[0] = b[0];
        for(int i=1;i<m;i++) sum_b[i]=sum_b[i-1]+b[i];

        int res = -1;
        for(int i=0;i<n;i++){
            int tmp =0;
            tmp+=sum_a[i];
            for(int j=i+1;j<m;j++){
                tmp+=b[j];
            }
            res= max(res, tmp);
        }
        for(int i=0;i<m;i++){
            int tmp =0;
            tmp+=sum_b[i];
            for(int j=i+1;j<n;j++){
                tmp+=a[j];
            }
            res= max(res, tmp);
        }
        cout<<res<<endl;
    }
    return 0;
}