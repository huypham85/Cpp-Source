#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin>>n;
    if(n%2==1){
        ll tmp=n/2+1;
        cout<<"-"<<tmp;
    }
    else cout<<n/2;
    return 0;
}