#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[10000];
int n;
int t;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int minn = 99999999;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j!=i&&a[i]>=a[j]){
                    int tmp=a[i]-a[j];
                    if(tmp<minn){
                        minn=tmp;
                        //cout<<tmp<<endl;
                    }
                }
            }
        }
        cout<<minn<<endl;
    }
    
    return 0;
}