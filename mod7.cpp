#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t,n,a[100005];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        int minn= 99999999;
        for(int i=0;i<n;i++){
            cin>>a[i];
            minn= min(minn, a[i]);
        }
        for(int i=0;i <n;i++){
            a[i]-=minn;
        }
        int ucln = a[0];
        for(int i=1;i<n;i++){
            ucln = __gcd(ucln, a[i]);
        }
        int res=0;
        for(int i=1;i<=sqrt(ucln);i++){
            if(ucln%i==0){
                if(i!=(ucln/i)) res+=2;
                else res++;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}