#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n;
bool unused[100];
int a[100];

bool check(){
    for(int i=2;i<=n-1;i++){
        if(a[i-1]==a[i]-1||a[i-1]==a[i]+1||a[i+1]==a[i]-1||a[i+1]==a[i]+1) return false;
    }
    if(a[2]==a[1]+1||a[2]==a[1]-1) return false;
    if(a[n]==a[n-1]+1||a[n]==a[n-1]-1) return false;
    return true;
}
void print(){
    for(int i=1;i<=n;i++) cout<<a[i];
    cout<<endl;
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(unused[j]){
            a[i]=j;
            unused[j]=false;
            if(i==n){
                if(check()) print();
            }
            Try(i+1);
            unused[j]=true;
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
        memset(unused,true,sizeof(unused));
        Try(1);
    }
    return 0;
}