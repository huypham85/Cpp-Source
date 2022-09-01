#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    string s;
    cin>>t;
    while(t--){
        cin.ignore();
        cin>>s;
        int res=s.size();
        for(int i=0;i<s.size();i++){
            for(int j=i+1;j<s.size();j++){
                if(s[i]==s[j]) res++;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}