#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
bool check(int n){
    if(n <2 ) return false;
    for(int i=2;i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t, l, r;
    cin>>t;
    while (t--)
    {
        cin>>l>>r;
        int dem=0;
        for(int i=l ; i <= r; i++){
            if(check(i)==true) dem++;
        }
        /* code */
        cout<<dem<<endl;
    }
    
    return 0;
}