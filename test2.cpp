#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n;
vector<string>a, b;
bool check[102];

void GenLetter(string s){
    for(char c = 'A';c<'A'+n;c++){
        if(!check[c]){
            s+=char(c);
            check[c]=true;
            if(s.length()==n) a.push_back(s);
            else{
                GenLetter(s);
            }
            s.pop_back();
            check[c]=false;
        }
    }
}
void GenNumber(string s){
    for(char c = '1';c<'1'+n;c++){
        if(!check[c]){
            s+=char(c);
            if(s.length()==n) b.push_back(s);
            else{
                GenLetter(s);
            }
            s.pop_back();
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--){
        cin>>n;
        a.clear();
        b.clear();
        
        memset(check,false,sizeof(check));
        GenLetter("");
        GenNumber("");
        cout<<a.size()<<" "<<b.size()<<endl;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<b.size();j++){
                cout<<a[i]<<b[j]<<endl;
            }
        }
    }
    return 0;
}