#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    string s,s1;
    getline(cin,s);
    getline(cin,s1);
    vector<string>vt;
    string tmp="";
    s+=' ';
    for(int i=0;i<s.size();i++){
        if(s[i]!=' ') tmp+=s[i];
        else if(s[i]==' '){
            vt.push_back(tmp);
            tmp="";
        }
    }
    for(int i=0;i<vt.size();i++){
        if(vt[i]!=s1) cout<<vt[i]<<" ";
    }
    return 0;
}