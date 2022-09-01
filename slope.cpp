#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[1000007], L[1000007], R[1000007];
int n;
vector<int>ans;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
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
    for(int i=1;i<=n;i++){
        ans.push_back(L[i]+R[i]);
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}