#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

vector<ll>fibo(94);
void Fibo(){
    fibo[1]=1;
	fibo[2]=1;
	for(int i=3;i<93;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
}

// do dai xau thu n = so fibo thu n
string Solve(ll n, ll k){
    if(n==1) return "0";
    if(n==2) return "1";
    // vi xau x(n)=x(n-1)+x(n-2) 
    if(k>fibo[n-2]) return Solve(n-1, k-fibo[n-2]);
    return Solve(n-2, k);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    Fibo();
    while(t--){
        ll n, k;
        cin>>n>>k;
        cout<<Solve(n,k)<<endl;
    }
    return 0;
}