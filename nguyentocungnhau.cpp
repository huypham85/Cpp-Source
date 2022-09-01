#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
bool check(int x){
    if(x<2) return false;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0) return false; 
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int dem=0;
        for(int i=1;i<=n;i++){
            if(__gcd(i, n)==1) dem++;
        }
        if(check(dem)) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
    return 0;
}