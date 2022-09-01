#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

string Try(string s){
    int len = s.size();
    int index = -1;
    for(int i= len-2; i>=0;i--){
        if(s[i]>s[i+1]){
            index = i;
            break;
        }
    }
    int greatestRight = -1;
    for(int i = len -1; i>index;i--){
        if(s[i]<s[index]){
            if(greatestRight == -1){
                greatestRight = i;
            }
            else if(greatestRight !=-1){
                if(s[i]>=s[greatestRight]) greatestRight = i;
            }
        }
    }
    if(index ==-1) return "-1";
    if(greatestRight != -1){
        swap(s[index], s[greatestRight]);
        return s;
        
    }
    return "-1";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    //cin.ignore();
    string s;
    while(t--){
        cin>>s;
        cout<<Try(s)<<endl;
    }
    return 0;
}