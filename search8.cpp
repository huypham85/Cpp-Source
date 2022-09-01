#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n, k;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        map<ll,ll>a;
        cin>>n>>k;
        for(int i=0;i<n;i++) {
            int so;
            cin>>so;
            a[so]++;
        }
        if(a[k]==0) cout<<"-1";
        else cout<<a[k];
        cout<<endl;
    }
    return 0;
}