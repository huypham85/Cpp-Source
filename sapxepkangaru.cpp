#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n;
int a[100005];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int res=n;
        for(int i=n/2-1,j=n-1;i>=0&&j>=n/2;){
            if(a[j]>=(2*a[i])){
                res--;
                i--;
                j--;
            }
            else i--;
        }
        cout<<res<<endl;
    }
    return 0;
}