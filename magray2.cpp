#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s, bin ="";
        cin>>s;
        bin=s[0];
        for(int i=1;i<s.size();i++){
            if(bin[i-1]!=s[i]) bin+="1";
            else bin+="0";
        }
        cout<<bin;
        cout<<endl;
    }
    return 0;
}