#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,q,l,r;
vector<ll>a(1000020);
map<int,int>tanso;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n>>q;
    a.resize(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    //for(int i=0;i<n;i++) cout<<a[i]<<" ";
    //cout<<endl;
    for(int i=0;i<n;i++) 
        tanso[a[i]]++;
    while(q--){
        ll l, r;
        cin>>l>>r;
        int tmp1 = upper_bound(a.begin(), a.end(), l) - a.begin();
        tmp1-=tanso[l];
        //cout<<tanso[l]<<endl;
        //cout<<tmp1<<endl;
        int tmp2 =lower_bound(a.begin(), a.end(), r) - a.begin();
        tmp2+=tanso[r];
        //cout<<tanso[r]<<endl;
        //cout<<tmp2<<endl;
        cout<<(tmp2-tmp1)<<endl;
    }
    //cout<<tanso[1];
    return 0;
}