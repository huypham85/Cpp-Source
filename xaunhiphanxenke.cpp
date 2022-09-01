#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            if(i%2==0) cout<<"0 ";
            else cout<<"1 ";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            if(i%2==1) cout<<"0 ";
            else cout<<"1 ";
        }
        cout<<endl;
    }
    return 0;
}