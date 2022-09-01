#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size()==1){
            if((s[0]-'0')%4==0) cout<<"4"<<endl;
            else cout<<"0"<<endl;
        }
        else{
            int len=s.size()-1;
            int tmp=(s[len-1]-'0')*10+(s[len]-'0');
            if(tmp%4==0) cout<<"4"<<endl;
            else cout<<"0"<<endl;
        }
    }
    return 0;
}