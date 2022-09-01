#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        cin.ignore();
        string a, b;
        cin>>a>>b;
        while(a.size()<b.size()) a="0"+a;
        while(b.size()<a.size()) b="0"+b;
        string res="";
        int carry=0;
        for(int i=a.size()-1; i>=0; i--){
            int tmp = (int)(a[i]-'0')+(int)(b[i]-'0')+carry;
            res=(char)(tmp%k+'0')+res;
            carry=tmp/k;
        }
        if(carry>0) res= (char)(carry+'0') +res;
        cout<<res<<endl;
    }
    return 0;
}