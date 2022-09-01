#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int a[100];
int n, k;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        ll res =0;
        ll sum1=0, sum2=0;
        for(int i=0;i<n;i++){
            if(i<k) sum1+=a[i];
            else sum2+=a[i];
        }
        res= abs(sum2-sum1);
        sum1=0, sum2=0;
        for(int i=0;i<n;i++){
            if(i<(n-k)) sum2+=a[i];
            else sum1+=a[i];
        }
        res = max(res, abs(sum1-sum2));
        cout<<res<<endl;
    }
    return 0;
}