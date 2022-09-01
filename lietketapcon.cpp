#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int t,dd=0;
string s;
void Try(int i, string tmp){
    if(dd==1) cout<<" ";
    for(int j=i;j<s.size();j++){
        dd=1;
        tmp+=s[j];
        cout<<tmp;
        Try(j+1,tmp);
        int tmp2=tmp.size();
        tmp.erase(tmp2-1,1);
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while (t--)
    {
        dd=0;
        int len;
        cin>>len;
        cin>>s;
        Try(0,"");
        cout<<endl;
    }
    
    
    return 0;
}