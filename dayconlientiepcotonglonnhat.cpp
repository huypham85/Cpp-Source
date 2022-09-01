#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int a[1001];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool check = false;
        int maxx = -11111;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>0) check = true;
            if(a[i]>maxx)  maxx = a[i];
        }
        if(check==false){
            cout<<maxx<<endl;
        }
        else{
            int sum =0;
            int res = a[0];
            for(int i=0;i<n;i++){
                if(sum+a[i]<0){
                    sum=0;
                }
                else sum+=a[i];
                res = max(res, sum);
            }
            cout<<res<<endl;
        }
        
    }
    return 0;
}