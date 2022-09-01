#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
priority_queue<int> q;
int n;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    cin.ignore();
    while(n--){
        char s;
        cin>>s;
        if(s=='A'){
            int so;
            cin>>so;
            q.push(so);
        }
        if(s=='P'){
            if(!q.empty()){
                cout<<q.top()<<" ";
                int tmp=q.top();
                int dem=0;
                while(!q.empty()&&q.top()==tmp){
                    q.pop();
                    dem++;
                }
                cout<<dem<<endl;
            }
            else cout<<"-1"<<endl;  
        }
    }
    if(!q.empty()){
        while(!q.empty()){
            cout<<q.top()<<" ";
            q.pop();
        }
    }
    else cout<<"-1";
    return 0;
}