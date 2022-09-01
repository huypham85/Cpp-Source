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
        int sum_tmp[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum_tmp[i]= a[i];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(a[i]>a[j]&&sum_tmp[i]<sum_tmp[j]+a[i]) sum_tmp[i] = sum_tmp[j]+a[i];
            }
        }
        int res= 0;
        for(int i=0;i<n;i++){
            if(res<sum_tmp[i]){
                res=sum_tmp[i];
            }
        }
        cout<<res<<endl;
    }
    return 0;
}