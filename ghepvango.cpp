#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int a[1000006],L[1000006],R[1000006];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;

    // tim canh lon nhat cua 1 hinh vuong

    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        stack<int>st_left;
        stack<int>st_right;
        for(int i=1;i<=n;i++){
            while(!st_left.empty()&&a[i]<=a[st_left.top()]) st_left.pop();
            L[i] = st_left.empty()? 1: st_left.top()+1;
            st_left.push(i);
        }
        for(int i=n;i>=1;i--){
            while(!st_right.empty()&&a[i]<=a[st_right.top()]) st_right.pop();
            R[i] = st_right.empty()? n: st_right.top()-1;
            st_right.push(i);
        }
        int res =0;
        for(int i=1;i<=n;i++){
            if(a[i]<=(R[i]-L[i]+1)) res = max(res,a[i]);
        }
        cout<<res<<endl;
    }
    return 0;
}