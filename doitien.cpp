#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int a[]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int res=0;
        for(int i=9;i>=0;i--){
            res+=n/a[i];
            n%=a[i];
        }
        cout<<res<<endl;
    }
    return 0;
}