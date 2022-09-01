#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
        int value=5;
        int res=i;
        for(int j=1;j<=n-i;j++){
            res+=value;
            if(j!=(n-i)) cout<<res<<" ";
            else cout<<res;
            value--;
        }
        cout<<endl;
    }
    
    return 0;
}