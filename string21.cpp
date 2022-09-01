#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t;
string s;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>s;
        vector<char>character;
        vector<int>number;
        for(int i=0;i<s.size();i++){
            if(s[i]>='A'&& s[i]<= 'Z') character.push_back(s[i]);
            else number.push_back(s[i]-'0');
        }
        sort(character.begin(), character.end());
        //sort(number.begin(), number.end());
        int sum=0;
        for(int i=0;i<number.size();i++) sum+=number[i];
        for(int i=0;i<character.size();i++) cout<<character[i];
        cout<<sum;
        cout<<endl;
    }
    return 0;
}