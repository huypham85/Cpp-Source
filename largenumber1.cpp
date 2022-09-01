#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
string sub(string a, string b){
    while(a.size()<b.size()) a="0"+a;
    while(b.size()<a.size()) b="0"+b;
    if(a<b) swap(a,b);
    int borrow=0;
    string res="";
    for(int i=a.size()-1;i>=0;i--){
        int tmp=(a[i]-'0')-(b[i]-'0')-borrow;
        if(tmp<0){
            borrow=1;
            tmp+=10;
        }
        else borrow=0;
        res=(char)(tmp%10+'0')+res;
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string a,b;
        cin>>a>>b;
        cout<<sub(a,b)<<endl;
    }
    return 0;
}