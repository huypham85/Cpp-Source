#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int l,r;
vector<int>res;

int toInt(string s){
    int ans =0;
    for(char i:s){
        ans = ans*10 + (i-'0');
    }
    return ans;
}   

void Solve(){
    queue<string>q;
    q.push("1");
    q.push("2");
    q.push("3");
    q.push("4");
    q.push("5");
    while(!q.empty()&&q.front().size()<6){
        string top = q.front();
        q.pop();
        res.push_back(toInt(top));
        // check neu khac tat ca cac so trong top
        if(top.find("0")==string::npos) q.push(top+"0");
        if(top.find("1")==string::npos) q.push(top+"1");
        if(top.find("2")==string::npos) q.push(top+"2");
        if(top.find("3")==string::npos) q.push(top+"3");
        if(top.find("4")==string::npos) q.push(top+"4");
        if(top.find("5")==string::npos) q.push(top+"5");
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    Solve();
    while(t--){
        cin>>l>>r;
        int up = upper_bound(res.begin(), res.end(),r) - res.begin();
        int low = lower_bound(res.begin(), res.end(), l) - res.begin();
        // for(int i=low; i<up; i++){
        //     cout<<res[i]<<" ";
        // }
        // cout<<endl;
        cout<<up-low<<endl;
    }
    return 0;
}