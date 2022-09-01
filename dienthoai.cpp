#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    queue<int>q;
    while(1){
        cin>>s;
        if(s=="END.") return 0;
        if(s=="1"){
            int so;
            cin>>so;
            cout<<"NEW"<<endl;
            q.push(so);
        }
        if(s=="2"){
            while(!q.empty()){
                cout<<q.front()<<" ";
                q.pop();
            }
            cout<<endl;
        }
    }
    return 0;
}