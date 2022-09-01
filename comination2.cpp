#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n,k,stop=0;
int a[100];
void init(){
    for(int i=1;i<=k;i++) a[i]=i;
}
void out(){
    for(int i=1;i<=k;i++) cout<<a[i];
    cout<<" ";
}
void Try(){
    while(stop==0){
        int i=k;
        while(a[i]==n-k+i&&i>=0) i--;
        if(i>0){
            a[i]++;
            for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
            out();
        }
        else stop=1;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        stop=0;
        cin>>n>>k;
        init();
        out();
        Try();
        cout<<endl;
    }
    return 0;
}