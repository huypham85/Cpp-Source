#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        priority_queue< ll, vector<ll>, greater<ll> > q;
        for(int i=0; i<n;i++){
            int tmp;
            cin>>tmp;
            q.push(tmp);
        }
        ll res =0;
        while(q.size()>1){
            ll a, b;
            a = q.top();
            q.pop();
            b = q.top();
            q.pop();
            ll sum = (a+b);
            res=(res+sum);
            q.push(sum);
        }
        cout<<res<<endl;
    }
    return 0;
}