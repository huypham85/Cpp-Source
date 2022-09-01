#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z') s[i]=s[i]+'a'-'A';
    }
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==' '&&s[i+1]!=' ') s[i+1]+='A'-'a';
    }
    s[0]+='A'-'a';
    vector<string>res;
    string tmp="";
    s+=' ';
    s+='@';
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==' '&&s[i+1]!=' '){
            res.push_back(tmp);
            tmp="";
        }
        else if(s[i]!=' ') tmp+=s[i];
    }
    int len=res.size();
    for(int i=0;i<res[len-1].size();i++){
        if(res[len-1][i]>='a') res[len-1][i]+='A'-'a';
    }
    //res[0]+='@';
    res[len-2]+=',';
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    //cout<<res[0];
    return 0;
}