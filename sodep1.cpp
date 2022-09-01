#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a, b;
bool prime(int i){
    if(i<2) return false;
    for(int j=2;j<=sqrt(i);j++){
        if(i%j==0) return false;
    }
    return true;
}

bool reverse(int x){
    int res=x;
    int tmp=0;
    while(x){
        tmp=tmp*10+x%10;
        x/=10;
    }
    return tmp==res;
}

bool uoc(int x){
    int dem=0;
    for(int i=2;i<=x/2;i++){
        if(x%i==0&&prime(i)==true) dem++;
    }
    if(dem>=3) return true;
    else return false;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>a>>b;
    if(a>b) swap(a, b);
    for(int i=a; i<=b;i++){
        if(uoc(i)==true&&reverse(i)==true) cout<<i<<" ";
    }
    
    return 0;
}