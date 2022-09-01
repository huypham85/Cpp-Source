#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1][n+1];
        for(int j=1;j<=n;j++) cin>>a[1][j];
        int cot = n-1;
        for(int i=2;i<=n;i++){
            for(int j=1;j<=cot;j++){
                a[i][j]= a[i-1][j]+a[i-1][j+1];
            }
            cot--;
        }
        cot = n;
        for(int i=1;i<=n;i++){
            cout<<"[";
            for(int j=1;j<=cot;j++){
                if(j==cot) cout<<a[i][j]<<"]";
                else cout<<a[i][j]<<" ";
            }
            cout<<endl;
            cot--;
        }
    }
    return 0;
}