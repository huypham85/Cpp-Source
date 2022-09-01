#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int len =s.size()-1;
        if(s[len]=='6'&&s[len-1]=='8') cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
    return 0;
}