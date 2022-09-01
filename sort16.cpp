#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n, tanso[100005];
struct So
{
    int value;
    int freq;
};
So a[10001];
bool cmp(So x, So y){
    if(x.freq==y.freq) return x.value<y.value;
    else return x.freq>y.freq;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<100005;i++) tanso[i]=0;
        for(int i=0;i<n;i++){
            cin>>a[i].value;
            tanso[a[i].value]++;
        }
        for(int i=0;i<n;i++){
            a[i].freq= tanso[a[i].value];
        }
        sort(a, a+n,cmp);
        for(int i=0;i<n;i++) cout<<a[i].value<<" ";
        cout<<endl;
    }
    return 0;
}