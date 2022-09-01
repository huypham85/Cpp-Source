#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>s;
        int res=-1;
        int tmp=0;
        s+='@';
        for(int i=0;i<s.size();i++){
            if(s[i]>='0'&&s[i]<='9'){
                tmp = tmp *10 + (s[i]-'0');
            }
            else{
                res = max(res, tmp);
                tmp=0;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}