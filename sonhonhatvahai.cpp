#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
bool appeared[(int)1e7+1];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>res;
        int value;
        memset(appeared,false,sizeof(appeared));
        for(int i=0;i<n;i++){
            cin>>value;
            if(appeared[value]==false){
                appeared[value]=true;
                res.push_back(value);
            }
        }
        if(res.size()<2) cout<<"-1"<<endl;
        else{
            sort(res.begin(),res.end());
            cout<<res[0]<<" "<<res[1]<<endl;
        }
    }
    return 0;
}