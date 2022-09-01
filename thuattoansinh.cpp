#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n;
int a[100];
void out(){
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    cout<<endl;
}
bool check(){
    for(int i=1;i<=n/2;i++){
        if(a[i]!=a[n-i+1]){
            return false;
        }
    }
    return true;
}
void Try(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n){
        if(check()==true) 
            out();
        }
        else Try(i+1);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--){
        cin>>n;
        Try(1);
    }
    return 0;
}