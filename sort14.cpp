#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n;
int a[10004];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        map<int, int> tanso;
        for(int i=0;i<n;i++){
            cin>>a[i];
            tanso[a[i]]++;
        }
        sort(a,a+n);
        int res=0;
        for(int i=a[0];i<a[n-1];i++){
            if(tanso[i]==0) res++;
        }
        cout<<res<<endl;
    }
    return 0;
}