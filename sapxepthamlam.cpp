#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n;
int a[100];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int dd=0;
        for(int i=1;i<=n;i++){
            if(a[i]!=i&&a[i]!=(n-i+1)){
                dd=1;
                break;
            }
        }
        if(dd==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}