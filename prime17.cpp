#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

const int N = 1e6 + 5;
int Prime[N];
void sieve(){
    for(int i =0; i<N; i++) Prime[i]=0;
    Prime[1]= Prime[0] = 1;
    for(int i=2; i<=sqrt(N); i++){
        if(Prime[i]==0){
            for(int j = i*i; j<N; j+=i)
                Prime[j]=1;
        }
    }
}
ll t, l , r;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    sieve();
    // for(int i=0;i<1000;i++){
    //     if(Prime[i]==0) cout<<i<<" ";
    // }
    while(t--){
        cin>>l>>r;
        l = sqrt(l);
        r = sqrt(r);
        //cout<<l<<" "<<r<<endl;
        int res=0;
        for(int i=l;i<=r;i++){
            if(Prime[i]==0) res++;
        }
        cout<<res<<endl;
    }
    return 0;
}