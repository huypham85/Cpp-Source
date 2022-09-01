#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    cin.ignore();
    string s;
    vector<int> ke[100];
    for(int i=1;i<=n;i++){
        getline(cin, s);
        s+=" ";
        int so =0;
        for(int j=0;j<s.size();j++){
            if(s[j]>='0'&&s[j]<='9'){
                so = so*10+(s[j]-'0');
            }
            else if(so>0){
                ke[i].push_back(so);
                so=0;
            }
        }
    }
    for(int i=1;i<=n;i++){
        sort(ke[i].begin(), ke[i].end());
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<ke[i].size();j++){
            if(i<ke[i][j]){
                cout<<i<<" "<<ke[i][j]<<endl;
            }
        }
    }
    return 0;
}