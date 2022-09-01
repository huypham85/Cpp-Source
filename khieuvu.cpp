#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1000000];
ll n, k,res=0;
ll bsearch(ll value, ll left, ll right){
    ll dem=0;
    while (left<=right)
    {
        ll mid = (left+right)/2;
        if(a[mid]==value+k){
            dem++;
            return dem;
        }
        else if(value+k<a[mid]){
            right=mid-1;
        }
        else if(value+k>a[mid]){
            left=mid+1;
        }
    }
    return -1; 
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n>>k;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a+n);
    for (ll i = 0; i < n; i++)
    {
        if(bsearch(a[i], 0, n-1)!=-1)
            res+=bsearch(a[i], 0, n-1);
    }
    cout<<res;
    
    return 0;
}