#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a,b;
bool check(int x){
    if(x<2) return false;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0) return false;
    }
    return true;
}

bool isThuanNghich(int n) {
    int a[20];
    int dem = 0, i;
    do {
        a[dem++] = (n % 10);
        n = n / 10;
    } while (n > 0);
    for (i = 0; i < (dem/2); i++) {
        if (a[i] != a[(dem - i - 1)]) {
            return false;
        }
    }
    return true;
}

bool solve(int n){
    if(check(n)){
        if(isThuanNghich(n)) return true;
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a>b) swap(a,b);
        for(int i=a;i<=b;i++){
            if(solve(i)) cout<<i<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}