#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

const int MAX_CHAR = 26;
int t;
string s;
struct Key{
    int freq;
    char ch;

    bool operator<(const Key &k) const{ // sap xep queue theo freq
        return freq < k.freq;
    }
};

void ReArrange(string s){
    int count[MAX_CHAR] = {0};
    for(int i=0;i<s.size();i++){
        count[s[i]-'a']++;
    }
    priority_queue<Key> q;
    for(char c = 'a'; c <='z';c++){
        if(count[c-'a']){
            q.push(Key{(count[c-'a']), c});
        }
    }
    
    int tmp = q.top().freq;
    int len = s.size();
    if(s.size()%2==0){
        if(tmp > (len/2)) cout<<"-1";
        else cout<<"1";
    }
    else{
        if(tmp > ((len/2)+1)) cout<<"-1";
        else cout<<"1";
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>s;
        ReArrange(s);
    }    
    return 0;
}