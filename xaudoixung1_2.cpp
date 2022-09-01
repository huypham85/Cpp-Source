#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1;
        s2=s1;
        int len=s1.size();
        for(int i=0;i<len/2;i++){
            swap(s2[i],s2[len-i-1]);
        }
        int f[len+1][len+1];
        for(int i=0;i<=len;i++){
            for(int j=0;j<=len;j++){
                if(i==0||j==0) f[i][j]=0;
                else if(s1[i-1]==s2[j-1]) f[i][j]=f[i-1][j-1]+1;
                else f[i][j]=max(f[i-1][j],f[i][j-1]);
            }
        }
        cout<<len-f[len][len]<<endl;
    }
    return 0;
}
