#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll t, n, m , l;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n>>m>>l;
        vector<ll>a(n), b(m), c(l);
        ll dd=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<m;i++){
            cin>>b[i];
        }
        for(ll i=0;i<l;i++){
            cin>>c[i];
        }
        for(ll i=0,j=0,k=0;i<n&&j<m&&k<l;){
            if(a[i]==b[j]&&b[j]==c[k]){
                cout<<a[i]<<" ";
                dd=1;
                i++; j++;k++;
            }
            else if(a[i]<b[j]) i++;
            else if(b[j]<c[k]) j++; 
            else k++;
        }
        if(dd==0) cout<<"-1";
        cout<<endl;
    }
    return 0;
}