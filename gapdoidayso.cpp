#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll Mul(ll a, ll b){
    if(b==0) return 1;
    if(b==1) return a;
    if(b%2==0) return Mul(a*a,b/2);
    return a*Mul(a*a, b/2);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        ll len = Mul(2, n)/2;
        while (1)
        {
            if(n==1||k==1){
                cout<<"1"<<endl;
                break;
            }
            if(len==k){
                cout<<n<<endl;
                break;
            }
            if(k>len){
                k = len - (k - len);
            }
            n--;
            len/=2;
        }
    }
    return 0;
}