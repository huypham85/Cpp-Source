#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n;
int a[1001][1001];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int maxx = -1;
        for(int i=0;i<n;i++){
            int sum =0;
            for(int j=0;j<n;j++){
                sum+= a[i][j];
            }
            maxx = max(maxx, sum);
        }
        for(int i=0;i<n;i++){
            int sum =0;
            for(int j=0;j<n;j++){
                sum+= a[j][i];
            }
            maxx = max(maxx, sum);
        }
        int res=0;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                sum+= a[i][j];
            }
            res+=(maxx-sum);
        }
        cout<<res<<endl;
    }
    return 0;
}