#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n;
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
    cin>>t;
    while(t--){
        cin>>n;
        int dd=0;
        for(int i=2;i<n;i++){
            if(check(i)==true){
                if(check(n-i)==true){
                    cout<<i<<" "<<n-i<<endl;
                    dd=1;
                    break;
                }
            }
        }
        if(dd==0) cout<<"-1"<<endl;
    }
    return 0;
}