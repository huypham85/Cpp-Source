#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

bool check(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int tongcs(int n){
    int sum=0;
    while(n){
        sum+=(n%10);
        n/=10;
    }
    return sum;
}
int sum_div(int n){
    int sum=0;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            while(n%i==0){
                sum+=tongcs(i);
                n/=i;
            }
        }
    }
    if(n>1) sum+=tongcs(n);
    return sum;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(tongcs(n)==sum_div(n)&&!check(n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }    
    return 0;
}