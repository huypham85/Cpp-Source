#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t;
string s1,s2;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>s1>>s2;

        //max
        for(int i=0;i<s1.size();i++){
            if(s1[i]=='6') s1[i]='5'; 
        }
        for(int i=0;i<s2.size();i++){
            if(s2[i]=='6') s2[i]='5'; 
        }
        ll res1=0,res2=0;
        for(int i=0;i<s1.size();i++){
            res1 = res1*10 + (s1[i]-'0');
        }
        for(int i=0;i<s2.size();i++){
            res2 = res2*10 + (s2[i]-'0');
        }
        cout<<res1+res2<<" ";

        //min
        for(int i=0;i<s1.size();i++){
            if(s1[i]=='5') s1[i]='6'; 
        }
        for(int i=0;i<s2.size();i++){
            if(s2[i]=='5') s2[i]='6'; 
        }
        res1=0;res2=0;
        for(int i=0;i<s1.size();i++){
            res1 = res1*10 + (s1[i]-'0');
        }
        for(int i=0;i<s2.size();i++){
            res2 = res2*10 + (s2[i]-'0');
        }
        cout<<res1+res2<<endl;
        //cout<<res1<<" "<<res2<<endl;
    }
    return 0;
}