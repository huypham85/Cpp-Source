#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    int dd=0;
    for(int i=2;i<=n;i++){
        while(n%i==0){
            n/=i;
            if(n!=1) cout<<i<<"x";
            else{
                cout<<i;
                dd=1;
            }
        }
    }    
    
    return 0;
}