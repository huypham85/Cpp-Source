#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int a[100005], res[100005];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        memset(res,0,sizeof(res));
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        stack<int>st;
        // min max tren doan tinh tien 1 ben
        for(int i=1;i<=n;i++){
            while(!st.empty()&&a[i]>=a[st.top()]) st.pop();
            int tmp = st.empty()? 1: st.top()+1; 
            res[i]= i-tmp+1;
            st.push(i);
        }
        for(int i=1;i<=n;i++) cout<<res[i]<<" ";
        cout<<endl;
    }
    return 0;
}