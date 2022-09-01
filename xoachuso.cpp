#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        if(n%4==0){
            int tmp=n-n/4;
            for(int i=1;i<=tmp;i++) cout<<"9";
            for(int i=1;i<=(n/4);i++) cout<<"8";
            cout<<endl;
        }
        else{
            int tmp=n-n/4-1;
            for(int i=1;i<=tmp;i++) cout<<"9";
            for(int i=1;i<=(n/4)+1;i++) cout<<"8";
            cout<<endl;
        }
    }
    return 0;
}