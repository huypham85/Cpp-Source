#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n, x;
struct So
{
    int value;
    int abs_value;
    int index;
};

bool cmp(So a, So b){
    if(a.abs_value == b.abs_value) return a.index<b.index;
    return a.abs_value < b.abs_value;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n>>x;
        So a[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i].value;
            a[i].index = i;
            a[i].abs_value= abs(x-(a[i].value));
        }
        sort(a, a+n, cmp);
        for(int i=0;i<n;i++) cout<<a[i].value<<" ";
        //for(int i=0;i<n;i++) cout<<a[i].abs_value<<" ";
        cout<<endl;
    }
    return 0;
}