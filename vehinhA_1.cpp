#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int a, b;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>a>>b;
    if(a>b){
        vector<int>tmp;
        for(int i=1;i<=a;i++){
            int value=a;
            if(i>=b+1){
                for(int k=0;k<tmp.size();k++) cout<<tmp[k];
                cout<<endl;
            }
            else{
                for(int j=1;j<=i;j++){
                    cout<<a-j+1;
                    if(i==b) tmp.push_back(a-j+1); 
                }
                for(int j=b-i;j>=1;j--){
                    cout<<a-i+1;
                    if(i==b) tmp.push_back(a-i+1); 
                }
                cout<<endl;
            }
            
        }
    }
    else{
        for(int i=1;i<=a;i++){
            int value=b;
            for(int j=1;j<=i;j++){
                cout<<b-j+1;
            }
            for(int j=b-i;j>=1;j--){
                cout<<b-i+1;
            }
            cout<<endl;
        }
    }
        
    return 0;
}