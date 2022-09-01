#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int u;
    cin>>u;
    while(u--){
        int n;
        cin>>n;
        queue<int>q;
        while(n--){
            int t;
            cin>>t;
            if(t == 1){
                cout<<q.size()<<endl;
            }
            if(t == 2){
                if(q.empty() == 1) cout<< "YES"<<endl;
                else cout<< "NO"<<endl;
            }
            if(t == 3){
                int tmp;
                cin>>tmp;
                q.push(tmp);
            }
            if(t == 4){
                if(q.empty() == 0){
                    q.pop();
                }
            }
            if(t == 5){
                if(q.empty() == 0)
                        cout<<q.front()<<endl;
                else cout<<"-1"<<endl;
            }
            if(t == 6){
                if(q.empty() == 0)
                        cout<<q.back()<<endl;
                else cout<<"-1"<<endl;
            }
        }
    }
   
    
    return 0;
}