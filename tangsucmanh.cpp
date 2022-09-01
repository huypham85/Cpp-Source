#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll a, b, c;
        cin>>a>>b>>c;
        if(a>b){
            if(c>(a-b)) cout<<c-(a-b)+1<<endl;
            if(c==(a-b)) cout<<c<<endl;
            if(c<(a-b)) cout<<c+1<<endl;
        }
        if(a==b) cout<<c<<endl;
        if(a<b){
            if(c>(b-a)) cout<<c-(b-a)-1<<endl;
            else cout<<"0"<<endl;
        }
    }
    return 0;
}