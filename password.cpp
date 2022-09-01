#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll n,k;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n>>k;
    //cout<<n;
    ll tmp=1;
    ll dd=0;
    for(int i=1;i<=k;i++) tmp*=10;
    //cout<<tmp<<endl;
    //tmp*=10;
    //cout<<tmp<<endl;
    /*for(int i=k;i<=8;i++){
        if(tmp%n==0){
            dd=1;
            cout<<tmp;
            break;
        }
        tmp*=10;
    }
    if(dd==0){
        cout<<n;
        for(int i=1;i<=k;i++) cout<<"0";
        cout;
    }*/
    ll p=n*tmp;
    ll tmp2=__gcd(n, tmp);
    
    cout<<(p/tmp2);
    return 0;
}