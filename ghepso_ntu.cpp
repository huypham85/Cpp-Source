#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string x, y,minn="99999999",maxx="0", init="";
void Try(string res, int i, int j){
    if(res.size()==x.size()+y.size()){
        maxx= max(res, maxx);
        minn=min(res, minn);
    }
    if(i<x.size()) Try(res+x[i], i+1, j);
    if(j<y.size()) Try(res+y[j], i, j+1);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>x>>y;
    Try("", 0, 0);
    cout<<minn<<endl<<maxx;
    return 0;
}