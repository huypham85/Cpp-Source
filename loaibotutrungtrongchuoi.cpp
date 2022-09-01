#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
vector<string>res;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    getline(cin,s);
    s+=" ";
    string tmp="";
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            res.push_back(tmp);
            tmp="";
        }
        else{
            tmp+=s[i];
        }
    }
    /*string tmp2="@";
    res.push_back(tmp2);*/
    for(int i=0;i<res.size()-1;i++){
        if(res[i]!="@"){
            for(int j=i+1;j<res.size();j++){
                cout<<res[i]<< " "<<res[j]<<endl;
                if(res[i]==res[j]) res[j]="@";
            }
        }
    }
    for(int i=0;i<res.size()-1;i++){
        if(res[i]!="@") cout<<res[i]<<" ";
    }
    return 0;
}