#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s1, s2;
vector<string>res1, res2;
void isolate(string s, vector <string> res){
    s+=" ";
    string tmp;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            res.push_back(tmp);
            tmp.clear();
        }
        else{
            tmp+=s[i];
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    getline(cin, s1);
    isolate(s1, res1);
    cout<<s1;
    for(int i=0;i<res1.size();i++){
        cout<<res1[i]<<endl;
    }
    return 0;
}