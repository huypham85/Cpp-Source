#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n;
vector<string>letter, number;
vector<bool>check(101,false);
void GenLetter(string s){
    for(char c = 'A';c<'A'+n;c++){
        if(!check[c]){
            s+=(char)(c);
            check[c]=true;
            if(s.length()==n) letter.push_back(s);
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
            s+=(char)(c);
            if(s.length()==n){
                number.push_back(s);
            }
            else{
                GenNumber(s);
            }
            s.pop_back();
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--){
        cin>>n;
        letter.clear();
        number.clear();
        check.resize(101,false);
        GenLetter("");
        GenNumber("");
        //cout<<a.size()<<" "<<b.size()<<endl;
        for(int i=0;i<letter.size();i++){
            for(int j=0;j<number.size();j++){
                cout<<letter[i]<<number[j]<<endl;
            }
        }
    }
    return 0;
}