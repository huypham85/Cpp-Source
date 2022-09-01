#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int a[100005];
bool check(int x,int y){
    if(x%2==1&&x<y) return false;
    return true;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
            int dd=0;
            for(int j=i+1;j<n;j++){
                if(a[j]>a[i]){
                    dd=1;
                    cout<<a[j]<<" ";
                    break;
                }
            }
            if(dd==0) cout<<"-1"<<" ";
        }
        cout<<"-1"<<endl;
    }
    return 0;
}