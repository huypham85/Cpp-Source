#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int t;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int i=s.size()-1;
        while(s[i]=='1'&&i>=0) i--;
        if(i<0){
            for(int j=0;j<s.size();j++) cout<<'0';
            cout<<endl;
        }
        else
        {
            s[i]='1';
            for(int j=i+1;j<s.size();j++) s[j]='0';
            cout<<s<<endl;
        }
    }
        
    
    return 0;
}