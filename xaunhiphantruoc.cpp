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
        while(s[i]=='0'&&i>=0) i--;
        if(i<0){
            for(int j=0;j<s.size();j++) cout<<'1';
            //cout<<'0';
            cout<<endl;
        }
        else
        {
            s[i]='0';
            for(int j=i+1;j<s.size();j++) s[j]='1';
            cout<<s<<endl;
        }
    }
        
    
    return 0;
}