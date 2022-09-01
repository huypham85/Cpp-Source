#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        cin>>s;
        int ts[1000]={0};
        for(int i=0;i<s.size();i++){
        ts[(int)(s[i])]++;
        }
        for(int i=0;i<s.size();i++){
            if(ts[(int)(s[i])]==1) cout<<s[i];
        }
        cout<<endl;
    }  
    return 0;
}