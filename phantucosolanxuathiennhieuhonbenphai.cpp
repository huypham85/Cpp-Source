#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int a[1000006], R[1000006],check[1000006],b[1000006];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        memset(check,0,sizeof(check));
        for(int i=1;i<=n;i++){
            cin>>a[i];
            check[a[i]]++;
        }
        //  for(int i=1;i<=n;i++){
        //     cout<<check[a[i]]<<" ";
        // }
        // cout<<endl;
        stack<int>st;
        for(int i=n;i>=1;i--){
            //if(st.size()) cout<<a[st.top()]<<endl;
            while(!st.empty()&&(check[a[i]]>=check[a[st.top()]])) st.pop();
            R[i] = st.empty()? -1 : a[st.top()];
            st.push(i);
        }
        for(int i=1;i<=n;i++){
            cout<<R[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}