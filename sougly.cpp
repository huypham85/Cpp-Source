#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

ll uglyNumber(ll n) {
    set<ll>Set;
    if(n==1||n==2||n==3||n==4||n==5) return n;
    Set.insert(1);
    n--;
    while(n--){
        auto it = Set.begin(); // tra ve 1 iterator
        ll tmp = *it;
        Set.erase(it);
        Set.insert(tmp*2);
        Set.insert(tmp*3);
        Set.insert(tmp*5);
    }
    return *Set.begin();
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<uglyNumber(n)<<endl;
    }
    return 0;
}