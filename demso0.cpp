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
        vector<int>a(n);
        ll res=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0) res++;
        }
        cout<<res<<endl;
    }
    return 0;
}