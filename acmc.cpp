#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
using namespace std;

vector<vector<long long> > mau(100);
vector<long long>ans;

bool prime(long long n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}

void cal(){
    long long a,b,c,d;
    mau[0].push_back(2);
    mau[0].push_back(3);
    mau[0].push_back(5);
    mau[0].push_back(7);
    for(int i=1;i<9;i++){
        for(int j=0;j<mau[i-1].size();j++){
            a=mau[i-1][j]*10;
            if(prime(a+1)) mau[i].push_back(a+1);
            if(prime(a+3)) mau[i].push_back(a+3);
            if(prime(a+7)) mau[i].push_back(a+7);
            if(prime(a+9)) mau[i].push_back(a+9);
        }
    }
    for(int i=0;i<9;i++)
        for(int j=0;j<mau[i].size();j++) ans.push_back(mau[i][j]);
    
}

int main(){
    fast_io;
    cal();
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<' ';
    }
    cout<<endl<<ans.size();


    return 0;
}