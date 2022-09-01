#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<int>a;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        a.resize(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int dd=0;
        for(int i=0;i<n;i++){
            if(a[i]==x){
                dd=1;
                cout<<i+1<<endl;
                break;
            }
        }
        if(dd==0) cout<<"NO"<<endl;
    }
    return 0;
}