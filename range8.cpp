#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n, k, a[10004];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int>res;
        float maxx = -999999.0;
        for(int i=0;i<=n-k;i++){
            ll sum =0;
            vector<int>vt_tmp;
            for(int j=i;j<(i+k);j++){
                vt_tmp.push_back(a[j]);
                sum+=a[j];
            }
            float tmp = (float)sum/(float)k;
            //cout<<tmp<<endl;
            if(tmp>maxx){
                maxx = tmp;
                res= vt_tmp;
            }
        }
        //cout<<maxx<<endl;
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}