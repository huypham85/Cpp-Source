#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll n, k;
vector<ll>a;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n>>k;
    int dd=0;
    a.resize(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(k>=n){
        sort(a.begin(), a.end());
        cout<<a[n-1];
    }
    else{
        for(int i=0;i<n-1;i++){
            ll dem=1;
            if(dd==0){
                for(int j=i+1;j<=i+k;j++){
                    if(a[i]<a[j]) break;
                    else{
                        dem++;
                        a.push_back(a[j]);
                        if(dem==k){
                            cout<<a[i];
                            dd=1;
                            break;
                        }
                    }
                }
            } 
            else break;
        }
        if(dd==0){
            cout<<a[n-1];
        }
    }
    return 0;
}