#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n, m, a[100005], b[100005];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n>>m;
        map<int, int>check;
        for(int i=0;i<n;i++){
            cin>>a[i];
            check[a[i]]++;
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            check[b[i]]++;
        }
        for(int i=0;i<100005;i++){
            if(check[i]>0) cout<<i<<" ";
        }
        cout<<endl;
        for(int i=0;i<100005;i++){
            if(check[i]>1) cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}