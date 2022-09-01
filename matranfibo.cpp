#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    ll fibo[93];
	fibo[1]=0;
	fibo[2]=1;
	fibo[3]=1;
	for(ll i=4;i<93;i++){
		fibo[i]=(fibo[i-1]+fibo[i-2]);
	}
    cin>>n;

    ll a[n][n];
    ll dd=0,hang=n-1,cot=n-1,value=1;
    while(dd<=(n/2)){
        for(ll i=dd;i<=cot;i++){
            a[dd][i]=fibo[value++];
        }
        for(ll i=dd+1;i<=hang;i++){
            a[i][cot]=fibo[value++];
        }
        for(ll i=cot-1;i>=dd;i--){
            a[hang][i]=fibo[value++];
        }
        for(ll i=hang-1;i>=dd+1;i--){
            a[i][dd]=fibo[value++];
        }
        hang--;cot--;dd++;
    }
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}