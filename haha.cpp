#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n;
int a[100];

// H la 1, A la 0 
bool check(){
    if(a[n-1]==1) return false;
    if(a[0]==0) return false;
    for(int i=0;i<n-1;i++){
        if(a[i]==1&&a[i+1]==1) return false;
    }
    return true;
}

void Try(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n-1){
            // do sth
            if(check()){
                for(int i=0;i<n;i++){
                    if(a[i]==1) cout<<"H";
                    else cout<<"A";
                }
                cout<<endl;
            }
        }
        else Try(i+1);
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        Try(0);
    }
    return 0;
}