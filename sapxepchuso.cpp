#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll check[10]={0};
        for(int i=0;i<n;i++){
            ll a;
            cin>>a;
            while(a){
                check[a%10]++;
                a/=10;
            }
        }
        for(ll i =0;i<10;i++){
            if(check[i]) cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}