#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, k ,n;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>k>>n;
        vector<int>res;
        for(int i=1;i<=k;i++){
            for(int j=1;j<=n;j++){
                int so;
                cin>>so;
                res.push_back(so);
            }
        }
        sort(res.begin(), res.end());
        for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
        cout<<endl;
    }
    return 0;
}