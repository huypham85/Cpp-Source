#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n;
int a[1000001];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        int res=9999999;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int tmp=a[i]+a[j];
                //cout<<tmp<<endl;
                if(abs(tmp)<abs(res)){
                    res=tmp;
                    //cout<<res<<endl;
                }
            }     
        }
        cout<<res<<endl;
    }
    return 0;
}