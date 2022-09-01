#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

string mul(string a, string b){
    int n = a.size();
    int m = b.size();
    int len = n+m;
    int sum[len+1];
    for(int i=0;i<=len; i++ ) sum[i]=0;
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            sum[i+j+1] += (a[i]-'0')*(b[j]-'0');
        }
    }
    for(int i=len-1;i>=0;i--){
        if(sum[i]>9){
            sum[i-1]+=sum[i]/10;
            sum[i]%=10;
        }
    }
    string res = "";
    for(int i=0;i<len;i++){
        res+= (sum[i]+'0');
    }
    while(res[0]=='0'&&res.size()>1){
        res.erase(0,1);
        //i++;
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
        string a, b;
        cin>>a>>b;
        cout<<mul(a,b)<<endl;
    }
    return 0;
}