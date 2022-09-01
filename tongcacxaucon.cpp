#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int>so;
        while(n){
            so.push_back(n%10);
            n/=10;
        }
        reverse(so.begin(),so.end());
        ll res =0;
        for(int i=0;i<so.size();i++){
            ll tmp =0;
            for(int j=i;j<so.size();j++){
                tmp =  tmp *10+so[j];
                res+=tmp;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}