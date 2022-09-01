#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int a[9999999],c[9999999];
int b[9999999]={0};
struct ste
{
    int value;
    int pos;
    /* data */
};
bool cmd2(ste &a, ste &b){
    return a.pos<b.pos;
}
bool cmd1(ste &a, ste &b){
    return a.value<b.value;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    vector<ste>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].value;
        a[i].pos=i;
    }
    /*for(int i=0;i<n;i++){
        c[i]=a[i];
    }
    sort(c, c+n);
    for(int i=0;i<n;i++){
        b[c[i]]=i;
    }
    for(int i=0;i<n;i++){
        cout<<b[a[i]]<<" ";
    }*/
    return 0;
}