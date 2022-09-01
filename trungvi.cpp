#include<bits/stdc++.h>
using namespace std;
int n,s;
vector<int>a;

long long solve1(){
    long long d=0,x=1,m=a[n/2];
    for(int i=n/2;i<n-1;i++){
        if(s>=a[i+1]){
            d=d+(a[i+1]-a[i])*x;
            x++;
            m=a[i+1];
        }
        else break;
        
    }
    if(m<s) d=d+(s-m)*x;
    return d;
 
}
 
long long solve2(){
    long long d=0,x=1,m=a[n/2];
    for(int i=n/2;i>0;i--){
        if(s<=a[i-1]){
            d=d+(a[i]-a[i-1])*x;
            x++;
            m=a[i-1];
        }
        else break;
        
    }
    if(m>s) d=d+(m-s)*x;
    return d;
}
 
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>s;
    a.resize(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    if(a[n/2]<s) cout<<solve1();
    else cout<<solve2();
    return 0;
}