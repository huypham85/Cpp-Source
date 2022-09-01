#include<iostream>
#include<math.h>
using namespace std;

const int N = 1e6 + 5;
int isPrime[N];
void sieve(){ 
    for(int i = 0 ;  i < N ; i++) isPrime[i] = 0; 
    isPrime[0] = isPrime[1] = 1;
    for(int i = 2 ; i <= sqrt(N) ; i++){
        if ( isPrime[i] == 0 ){ 
            for(int j = i * i ; j < N ; j += i)
                isPrime[j] = 1; 
        }
    }
}
long long n;
void input(){
    cin >> n ;
}
void solve(){
    int res = 0;
    for(int i = 2 ; i <= sqrt(n) ; i++){
        if ( isPrime[i] == 0)
            res++;
    }
    cout << res << endl;
}
int main(){
    sieve();
    int t=1;
    cin>>t;
    while(t--){
        input();
        solve();
    }
    return 0;
}