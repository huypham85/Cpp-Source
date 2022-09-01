#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    //int value=1;
    for(int i=1;i<=n;i++){
        int value=i;
        cout<<value<<" ";
        for(int j=2;j<=i;j++){
            value=value+n-j+1;
            cout<<value<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}