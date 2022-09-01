#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t;
struct data{
    int s;
    int f;
};
data a[1003];
bool cmp(data x, data y){
    return (x.f<y.f);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i].s;
        for(int i=0;i<n;i++) cin>>a[i].f;
        sort(a, a+n, cmp);
        int i=0;
        int dem=1;
        for(int j=1;j<n;j++){
            if(a[j].s>=a[i].f){
                dem++;
                i=j;
            }
            
        }
        cout<<dem<<endl;
    }
    return 0;
}