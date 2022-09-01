#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    int value=97;
    for(int i=1;i<=n;i++){
        if(i%2==1){
            for(char j=value;j<=value+i-1;j++){
                cout<<j<<" ";
            }
            cout<<endl;
            value=value+i;
            //cout<<value<<endl;
        }
        if(i%2==0){
            for(char j=value+i-1;j>=value;j--){
                cout<<j<<" ";
            }
            cout<<endl;
            value=value+i;
            //cout<<value<<endl;
        }
    }
    
    return 0;
}