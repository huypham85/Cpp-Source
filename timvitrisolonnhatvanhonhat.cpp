#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,i_max,i_min,maxx,minn;
int a[100000];
void nhap(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void solve(){
    i_max=0,i_min=0;
    maxx=a[0],minn=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>=maxx){
            maxx=a[i];
            i_max=i;
        }
        if(a[i]<=minn){
            minn=a[i];
            i_min=i;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    nhap();
    solve();
    cout<<maxx<<" "<<i_max+1<<endl;
    cout<<minn<<" "<<i_min+1<<endl;
    return 0;
}