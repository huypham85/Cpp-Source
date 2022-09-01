#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,res;
ll a[1000000];
map<ll,ll>b;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[a[i]]++;
    }
    res=a[0];
    for(int i=1;i<n;i++){
        if(b[a[i]]>b[res]) res=a[i]; 
    }
    cout<<res;
    return 0;
}