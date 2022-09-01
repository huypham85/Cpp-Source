#include <bits/stdc++.h>
using namespace std;
int i,n,dem(0);
struct h{
    int gt,vt;
};
stack <h> st;
int a[1000000];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        int x=1;
        while(!st.empty()&& st.top().gt<=a[i]){
            dem+=(int) st.top().vt;
            if(st.top().gt==a[i]) x+=st.top().vt;
            st.pop();
        }
    if(!st.empty()) dem++;
       st.push({a[i],x});
    }
    cout<<dem;
    return 0;
}