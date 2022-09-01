#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll k;
        string s;
        cin>>k;
        cin.ignore();
        cin>>s;
        ll check[1000]={0};
        // for(char i:s) cout<<i;
        // cout<<endl;
        for(char i:s){
            check[i]++;
        }
        priority_queue<ll,vector<ll>>q;
        for(char i:s){
            if(check[i]>0) q.push(check[i]);
            check[i]=0;
        }
        while(k>0&&q.size()>0){
            ll tmp = q.top();q.pop();
            k--;
            tmp--;
            q.push(tmp);
        }
        ll res=0;
        while(!q.empty()){
            ll tmp = q.top();
            q.pop();
            res=res + tmp*tmp;
        }
        cout<<res<<endl;
    }
    return 0;
}