#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll tu, mau;
        cin>>tu>>mau;
        ll res;
        while(1){
            if(mau%tu==0){
                cout<<"1/"<<mau/tu<<endl;
                break;
            }
            else{
                res=mau/tu+1;
                cout<<"1/"<<res<<" + ";
                tu=tu*res-mau;
                mau=mau*res;
            }
        }
    }
    return 0;
}