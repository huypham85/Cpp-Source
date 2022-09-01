#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    ll n, a, b, c;
    cin>>n>>a>>b>>c;
    ll tmp;
    ll res=0;
    if(a<=b) tmp=a;
    else tmp=b;
    //cout<<tmp<<endl;
    while(n>=tmp){
        n=n-tmp+c;
        res++;
    }
    cout<<res;
    return 0;
}