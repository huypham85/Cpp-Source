#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
string BDN(int n){
    queue<string>q;
    q.push("1");
    while(!q.empty()){
        ll tmp =0;
        string res = q.front();
        q.pop();
        for(int i=0;i<res.size();i++){
            tmp = tmp *10 + (res[i]-'0');
            tmp%=n;
        }
        if(tmp==0) return res;
        else{
            q.push(res+"0");
            q.push(res+"1");
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<BDN(n)<<endl;
    }
    return 0;
}