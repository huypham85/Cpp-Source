#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
using namespace std;

// void change(int n,int k){
//     vector<int>a;
//     while(n){
//         a.push_back(n%k);
//         n/=k;
//     }
//     for(int i=0;i<a.size();i++) cout<<a[i];
//     cout<<endl;
// }

// kiem tra xem so n co phai so Palindrome co so k hay khong?
bool check(int n,int k){
    vector<int>a;
    while(n){
        a.push_back(n%k);
        n/=k;
    }
    k=a.size()/2;
    n=a.size()-1;
    for(int i=0;i<k;i++) if(a[i] != a[n-i]) return false;
    return true;

}

//kiem tra xem so n co phai so Supper Palindrome co so k hay khong?
bool SupperP(int n,int k){
    for(int i=2;i<=k;i++) {
        if(!check(n,i)) return false;
    }
    return true;
}

int main(){
    fast_io;
    int n,l,r;
    cin>>n>>l>>r;
    for(int i=l;i<=r;i++){
        if( SupperP(i,n)) cout<<i<<' ';
        // change(i,n);
    }


    return 0;
}