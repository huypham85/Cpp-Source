#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<char> v;
        //for(char i:s) v.push_back(i);
        int index=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='-'){
                if(index>0){
                    v.erase(v.begin()+(index-1));
                    index--;
                }
            }
            else if(s[i]=='<'){
                if(index>0) index--;
            }
            else if(s[i]=='>'){
                if(index<v.size()) index++;
            }
            else if(isalpha(s[i])){
                if(index<v.size()) v.insert(v.begin()+index,s[i]);
                else v.push_back(s[i]);
                index++;
            }
            // cout<<index<<endl;
            // for(int i=0;i<v.size();i++) cout<<v[i];
            // cout<<endl;
        }
        for(int i=0;i<v.size();i++) cout<<v[i];
    }
    return 0;
}