#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n;
string s;
void Try(int i,string res){
    cout<<res<<" ";
    for(int j=i+1;j<s.size();j++){
        res+=s[j];
        Try(j,res);
        res.pop_back();
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        cin.ignore();
        cin>>s;
        for(int i=0;i<s.size();i++){
            Try(i,string(1,s[i]));
        }
        cout<<endl;
    }
    return 0;
}