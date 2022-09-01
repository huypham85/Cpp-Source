#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int a,b;
    cin>>a>>b;
    
    if(a<b){
        int x=a;
        for(int i=1;i<=a;i++){
            int tmp=b-x+1;
            int tmp2=1;
            while(tmp2<=(b-x+1)){
                cout<<tmp;
                tmp2++;
            }
            for(int j=tmp+1;j<=b;j++) cout<<j;
            cout<<endl;
            //cout<<x<<endl;
            x--;
        }
    }
    else if(a>=b){
        int x=b;
        int value=2;
        for(int i=1;i<=a;i++){
            int tmp=a-x+1;
            if(i<=tmp){
                for(int j=tmp;j<=a;j++) cout<<j;
                cout<<endl;
            }
            else{
                int tmp2=value;
                while(tmp2--) cout<<i;
                for(int j=i+1;j<=a;j++) cout<<j;
                cout<<endl;
                value++;
            }
        }
    }
    return 0;
}