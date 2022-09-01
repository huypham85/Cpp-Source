#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

struct So
{
    int val;
    int freq;
    int index;
};
bool cmp(So a, So b){
    if(a.freq==b.freq) return a.val<b.val;
    return a.freq>b.freq;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        So a[n+1];
       // int a[n+1];
        map<int,int>d;
        for(int i=0;i<n;i++){
            cin>>a[i].val;
            d[a[i].val]++;
            a[i].freq=d[a[i].val];

        }
        sort(a,a+n,cmp);
        for(int i=0;i<n;i++){
            if(d[a[i].val]>1){
                for(int j=0;j<a[i].freq;j++) cout<<a[i].val<<" ";
                d[a[i].val]=0;
            }
            else if(d[a[i].val]==1) cout<<a[i].val<<" ";
        }
        cout<<endl;
    }
    return 0;
}