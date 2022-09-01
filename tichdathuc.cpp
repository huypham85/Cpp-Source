#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int a[1001],b[1001];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        int res[10004]={0}; // res[i] la he so cua so hang bac i
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                res[i+j] +=a[i]*b[j];
            }
        }
        for(int i=0;i<((m+n)-1);i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}