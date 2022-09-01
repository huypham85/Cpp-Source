#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll n;
ll a[10004];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        // tich lon nhat cua 3 so luon luon = max cua (tich 3 so cuoi, 2 so dau va so cuoi) 
        ll res_3 = max(a[0]*a[1]*a[n-1],a[n-1]*a[n-2]*a[n-3]);
        ll res_2 = max(a[0]*a[1],a[n-1]*a[n-2]);
        ll res = max(res_2,res_3);
        cout<<res;
    }
    return 0;
}