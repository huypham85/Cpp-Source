#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n,sumArray;
int a[1000];
bool ok = false;
void Try(int i, int res){
    for(int j=i;j<n;j++){
        res+=a[j];
        if(ok||res>sumArray/2) return;
        if(res==sumArray/2){
            ok = true;
            return;
        }
        else Try(j, res);
        res-=a[j];
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        sumArray=0;
        ok = false;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sumArray+=a[i];
        }
        if(sumArray%2==1){
            cout<<"NO"<<endl;
            return 0;
        }
        sort(a,a+n);
        Try(0,0);
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}