#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll t, a, b;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    int dem=0;
    while(t--){
        dem=0;
        cin>>a>>b;
        while (b)
        {
            b/=10;
            dem++;
        }
        //cout<<dem<<endl;
        cout<<a*(dem-1)<<endl;
    }
    return 0;
}