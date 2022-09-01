#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n , a[100005], l , r;
bool check(){
    int len = (l+r)/2;
    
    for(int i=l+1 ; i<=len; i++){
        if(a[i]<a[i-1]) return false;
    }
    for(int i=len+1 ; i<=r; i++){
        if(a[i]>a[i-1]) return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n;i++) cin>>a[i];
        cin>>l>>r;
        if(check()==true) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}