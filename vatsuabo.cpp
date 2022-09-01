#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int a[1001];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a+n, greater<int>());
    /*for(int i=0;i<n;i++){
        cerr<<a[i]<<" ";
    }
    cerr<<endl;*/
    int sum=0;
    for(int i=0;i<n;i++){
        if(a[i]-i>=0)
        sum = sum+ (a[i]-i);
    }
    cout<<sum;
    return 0;
}