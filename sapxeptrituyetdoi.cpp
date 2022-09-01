#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
struct So
{
    int index;
    int val;
    int ABS;
};
bool cmp(So a, So b){
    if(a.ABS==b.ABS) return a.index<b.index;
    return a.ABS<b.ABS;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        So a[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i].val;
            a[i].index=i;
            a[i].ABS=abs(x-a[i].val);
        }
        sort(a,a+n,cmp);
        for(int i=0;i<n;i++) cout<<a[i].val<<" ";
        cout<<endl;
    }
    return 0;
}