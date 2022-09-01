#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[0]=='0'){
            cout<<0<<endl;
        }
        else{
        	int len=s.size();
	        int f[len+1];
	        f[0]=1;
	        f[1]=1;
	        for(int i=2;i<=len;i++){
	            f[i]=0;
	            if(s[i-1]>'0')
	                f[i]=f[i-1];
	            if(s[i-2]=='1'||(s[i-2]=='2'&&s[i-1]<'7'))
	                f[i]+=f[i-2];
	        }
	        cout<<f[len]<<endl;
		}
        
    }
    return 0;
}