#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n,stop=0;
int a[100];
void init(){
    for(int i=1;i<=n;i++) a[i]=i;
}
void out(){
    for(int i=1;i<=n;i++) cout<<a[i];
    cout<<" ";
}
void Try(){
    while(stop==0){
        int i=n-1;
        while(a[i]>a[i+1]&&i>0) i--;
        if(i<=0) stop=1;
        else{
            for(int j=n;j>=0;j--){
                if(a[j]>a[i]){
                    swap(a[i], a[j]);
                    sort(a+i+1,a+n+1);
                    out();
                    break;
                } 
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        stop=0;
        cin>>n;
        init();
        out();
        Try();
        cout<<endl;
    }
    return 0;
}