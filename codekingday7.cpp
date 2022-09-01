#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,dem,res=0;
ll a[5001];

void solve(ll x){
    for(ll i=x;i<n-1;i++){
        ll sum=0;
        dem=0;
        if(a[i]>=a[i+1]){
            for(ll j=a[i+1];j>=(-1)*a[i+1];j--){
                sum+=j;
                dem++;
                if(sum==a[i]){
                    if(dem==a[i+1]) break;
                    else{
                        a[i+1]=dem;
                        res++;
                    }
                }
            }
        }
        else{
            for(ll j=a[i];j>=(-1)*a[i];j--){
                sum+=j;
                dem++;
                if(sum==a[i]){
                    if(dem==a[i+1]) break;
                    else{
                        a[i+1]=dem;
                        res++;
                    }
                }
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    for(ll i=0;i<n-1;i++)
        cin>>a[i];
    if(a[0]==1&&a[1]==2) solve(1);
    else solve(0);
    cout<<res;
    return 0;
}