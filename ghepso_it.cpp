#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a, b, c, d;
ll res=0;
vector<int>v;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>a;
    v.push_back(a);
    cin>>b;
    cin>>c;
    v.push_back(c);
    cin>>d;
    v.push_back(d);
    int minn=99999999;
    for(int i=0;i<v.size();i++){
        if(v[i]<minn) minn =v[i];
    }
    res=res+(256*minn);
    //cout<<res<<endl;
    a=a-minn;
    if(a<b) res=res+(32*a);
    else res=res+(32*b);
    cout<<res;
    return 0;
}