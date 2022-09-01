#include<bits/stdc++.h>
using namespace std;
int n, xuatphat, a[1001][1001];

void input(){
    cin>>n>>xuatphat;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
}

void euler(int u){
    stack<int>st,CE;
    st.push(u);
    while(!st.empty()){
        int dem =0;
        int s = st.top();
        for(int i=1;i<=n;i++){
            if(a[s][i]==0) dem++;
        }
        if(dem!=n){
            for(int t = 1;t<=n;t++){
                if(a[s][t]==1){
                    st.push(t);
                    a[s][t]= a[t][s]=0;
                    break;
                }
            }
        }
        else{
            CE.push(s);
            stack<int>tmp=st;
            cout<<"["<<" ";
            while(!tmp.empty()){
                cout<<tmp.top()<<" ";
                tmp.pop();
            }
            cout<<" ]"<<endl;
            st.pop();
        }
    }
    while(!CE.empty()){
        cout<<CE.top()<<" ";
        CE.pop();
    }
}
int main(){
    input();
    euler(xuatphat);
    return 0;
}