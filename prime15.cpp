#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
bool check(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int solve(int n){
    if(n==1) return n;
    if(check(n)) return n;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            if(check(i)) return i;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cout<<solve(i)<<" ";
        }
        cout<<endl;

    }
    return 0;
}