#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll t, n;
const int MAX = 1e3+6;
ll isPrime[MAX];

void Sieve(){
    for(int i=0;i<MAX;i++){
        isPrime[i]=0;
    }
    isPrime[0]=isPrime[1]=1;
    for(int i=2;i<=sqrt(MAX);i++){
        if(isPrime[i]==0){
            for(int j = i*i; j<MAX;j+=i){
                isPrime[j]=1;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        Sieve();
        for(int i =2 ;i<=sqrt(n);i++){
            if(isPrime[i]==0){
                cout<<i*i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}