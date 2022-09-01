#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
int n, m, minn =9999999,stop;

void Try(int res, int dem){
    if(res == n){
        if(res%m==0){
            minn = dem;
            cout<<minn;
            stop=1;
            return;
        }
    }
    else{
        for(int i=2; i>=1;i--){
            if(stop==1) break;
            if (res+i <= n){
                res+=i;
                dem++;
                Try(res, dem);
                res-=i;
                dem--;
            }
            //else break;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n>>m;
    stop=0;
    Try(0, 0);
    if(stop==0) cout<<"-1";
    return 0;
}

