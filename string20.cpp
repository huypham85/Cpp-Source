#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        //cin.ignore();
        getline(cin, s);
        stringstream ss(s);
        vector<string>res;
        string tmp;
        while(ss>>tmp) res.push_back(tmp);
        for(int i=res.size()-1;i>=0;i--) cout<<res[i]<<" ";
        cout<<endl;
        res.clear();
    }
    return 0;
}