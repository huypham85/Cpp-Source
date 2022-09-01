#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n,k;
char a[1000];
void out(){
    for(int i=1;i<=k;i++){
        cout<<a[i];
    }
    cout<<endl;
}
void Try(int i){
    for(char j=a[i-1]+1;j<=('@'+n-k+i);j++){
        a[i]=j;
        if(i==k) out();
        else Try(i+1);
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        a[0]='@';
        Try(1);
    }
    return 0;
}