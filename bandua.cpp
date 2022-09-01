#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[1000007], L[1000007], R[1000007];
int n;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        stack<int>st;
        for(int i=1;i<=n;i++){
            while(!st.empty()&&a[i]<=a[st.top()]) st.pop();
            L[i]=st.empty() ? 1 : st.top()+1;
            st.push(i);
        }
        stack<int>st1;
        for(int i=n;i>=1;i--){
            while(!st1.empty()&&a[i]<=a[st1.top()]) st1.pop();
            R[i]=st1.empty() ? n : st1.top()-1;
            st1.push(i);
        }
        int res=0;
        for(int i=1;i<=n;i++){
            if(R[i]-L[i]+1>=a[i]) res=max(res, a[i]);
        }
        cout<<res<<endl;
    }
    
    return 0;
}