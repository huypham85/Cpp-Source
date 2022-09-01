#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
bool check(char x){
    if(x=='2'||x=='3'||x=='5'||x=='7') return true;
    return false;
}

bool solve(string s){
    for(int i=0;i<s.size();i++){
        if(check(s[i])==false) return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        cin>>s;
        if(solve(s)==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}