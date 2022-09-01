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
        getline(cin, s);
        stringstream ss;
        ss<<s;
        vector<string>res;
        while(ss>>s){
            res.push_back(s);
        }
        reverse(res.begin(), res.end());
        for(string i:res){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}