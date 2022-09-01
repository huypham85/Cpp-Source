#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t,n,x;
int a[1000006];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        int dd=1;
        for(int i=1;i<n;i++) cin>>a[i];
        for(int i=1;i<n;i++){
            if(a[i]!=i){
                //cout<<a[i]<<" "<<i<<endl;
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}