#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a, b;
bool check(int i){
    if(i<2) return false;
    for(int j=2;j<=sqrt(i);j++){
        if(i%j==0) return false;
    }
    return true;
}

bool solve(int i){
    for(int j=2;j<=i;j++){
        if(i%j==0){
            if(check(j)==true){
                if(i%(j*j)==0) return true;
            }
        }
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>a>>b;
    if(a>b) swap(a, b);
    if(a==1) a+=1;
    for(int i=a;i<=b;i++){
        if(solve(i)==true) cout<<i<<" ";
    }
    return 0;
}