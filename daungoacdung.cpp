#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    while(1){
        getline(cin, s);
        if(s==".") break;
        stack<char>a;
        for(int i=0;i<s.size();i++){
            if(s[i]==')'&&a.empty()==1||s[i]==']'&&a.empty()==1){
                a.push(s[i]);
        		cout<<"no"<<endl;
        		break;
			}
            else if(s[i]=='('|| s[i]=='['){
                a.push(s[i]);
            }
            else if(s[i]==')'){
                if(a.top()=='('){
                   a.pop();
                }  
                else{
                    a.push(s[i]);
                    cout<<"no"<<endl;
                    break;
                }
            }
            else if(s[i]==']'){
                if(a.top()=='['){
                    a.pop();
                }  
                else{
                    a.push(s[i]);
                    cout<<"no"<<endl;
                    break;
                }  
            }
        }
        if(a.empty()==1) cout<<"yes"<<endl;
    }
        
    
    return 0;
}
