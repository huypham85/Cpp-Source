#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
struct bracket{
    int s,e;
};
vector<bracket>vt;
string s;
vector<string>res;
int a[100];

bool cmp(bracket a,bracket b){
    return a.s<b.s;
}

void Try(int i, int n){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n-1){
            int index = -1;
            int check[100]={0};
            for(int l=0;l<n;l++){
                if(a[++index]==0){
                    check[vt[index].s]=check[vt[index].e]=1;
                }
            }
            if(index>0){
                string tmp ="";
                for(int l=0;l<s.size();l++){
                    if(check[l]==0) tmp+=s[l];
                }
                res.push_back(tmp);
            }
        }
        else Try(i+1, n);
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t=1;
    // cin>>t;
    // cin.ignore();
    while(t--){
        cin>>s;
        stack<int>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);
            }
            if(s[i]==')'){
                bracket tmp;
                tmp.s = st.top();
                tmp.e = i;
                vt.push_back(tmp);
                st.pop();
            }
        }
        sort(vt.begin(),vt.end(),cmp);
        Try(0,vt.size());
        sort(res.begin(),res.end());
        vector<string>ans;
        for(int i=0;i<res.size();i++){
            if(res[i]==s) continue;
            if(ans.size()==0) ans.push_back(res[i]);
            else if(res[i]!=ans[ans.size()-1]) ans.push_back(res[i]);
        }
        for(string i : ans) cout<<i<<endl;
    }
    return 0;
}