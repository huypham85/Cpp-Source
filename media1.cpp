#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    int b=n;
    int value=b;
    int dai =b*2-1;
    int x=dai;
    int len=dai;
    while(n--){
        for(int i=1;i<=(dai-x)/2;i++) cout<<value+1;
        for(int i=1;i<=dai-((dai-x)/2);i++) cout<<value;
        for(int i=1;i<=(dai-x)/2;i++) cout<<value+1;
        value--;
        x=value*2-1;
        cout<<endl;
    }
    value=2;
    len=len-n;
    cout<<len<<" "<<n<<endl;
    while(len--){
        for(int i=n;i>=value;i--) cout<<i;
        for(int i=1;i<=(value*2-1);i++) cout<<i;
        for(int i=value+1;i<=n;i++) cout<<i;
        value++;
        cout<<endl;
    }
    
    return 0;
}