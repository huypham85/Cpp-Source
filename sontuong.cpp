#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll x, y, a, b;
vector<ll>x1, x2,res1, res2;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>x>>y>>a>>b;
    ll i=1;
    ll tmp=1;
    while(tmp<=b){
        tmp=x*i;
        x1.push_back(tmp);
        i++;
    }
    tmp=1;
    i=1;
    while(tmp<=b){
        tmp=y*i;
        x2.push_back(tmp);
        i++;
    }
    for(ll i=0;i<x1.size();i++){
        if(x1[i]>=a&&x1[i]<=b) res1.push_back(x1[i]);
    }
    for(ll i=0;i<x2.size();i++){
        if(x2[i]>=a&&x2[i]<=b) res2.push_back(x2[i]);
    }
    ll dem=0;
    /*sort(res.begin(), res.end());
    for(ll i=1;i<res.size();i++){
        if(res[i]==res[i-1]) dem++;
    }*/
    for (ll i = 0; i < res1.size(); i++)
    {
        if(binary_search(res2.begin(), res2.end(), res1[i])==true) dem++;
    }
    
    cout<<dem;
    return 0;
}