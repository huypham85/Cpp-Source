#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll toNum(string s){
    ll so=0;
    for(char &i:s){
        so = so *10 + (i-'0');
    }
    return so;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string n;
        cin>>n;
        queue<string>q;
        q.push("1");
        int cnt=0;
        while(q.size()>0){
            string tmp = q.front();
            q.pop();
            if(tmp.length()>n.length()) break; // dieu kien dung
            else if(tmp.length()==n.length()){ // bang size nhau thi so sanh gia tri
                if(toNum(tmp)<=toNum(n)){ // gia tri nho hon thi cnt++
                    cnt++;
                }
            }
            else{
                q.push(tmp+"0");
                q.push(tmp+"1");
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}