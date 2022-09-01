#include<bits/stdc++.h>
using namespace std;
string tostring (long long s){
    string b= "";
    while (1){
        char tmp=s%10 +'0';
        s/=10;
        b=tmp+b;
        if(s==0) break;
    }
    return b;
}
 
int main(){
    long long tmp,a,dem=0,s=0,i;
    string n;
        cin>>n;
        while(n.size()>1){
        	s=0;
            for(i=0;i<n.size();i++){
                s+=n[i]-'0';  
            }
            dem++;
            n=tostring(s);
        }
        cout<<dem;
    return 0;
}
