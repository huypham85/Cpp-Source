#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n;
int a[100];

void out(){
    for(int i=0;i<n;i++){
        if(a[i]==0) cout<<"A";
        else cout<<"B";
    }
    cout<<" ";
}

void Try(int i){
    if(i>=n){
        out();
    }
    else{
        for(int j=0;j<=1;j++){
            a[i]=j;
            Try(i+1);
        }
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
        cout<<endl;
    }
    return 0;
}