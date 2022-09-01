#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, m,dem=0;
int a[51];
void Try(int res,int j){
    if(res==n){
        dem++;
    }
    else{
        for(int i=j;i<m;i++){
            if(res+a[i]<=n){
                res+=a[i];
                Try(res,i);
                res-=a[i];
            }
        }
    }

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    Try(0,0);
    cout<<dem;
    return 0;
}
    