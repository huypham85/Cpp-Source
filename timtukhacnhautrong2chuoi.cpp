#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s1, s2;
        vector<string>res1, res2,res;
        getline(cin, s1);
        getline(cin, s2);
        s1+=" ";
        string tmp="";
        for(int i=0;i<s1.size();i++){
            if(s1[i]==' '){
                res1.push_back(tmp);
                tmp.clear();
            }
            else{
                tmp+=s1[i];
            }
        }
        s2+=" ";
        tmp="";
        for(int i=0;i<s2.size();i++){
            if(s2[i]==' '){
                res2.push_back(tmp);
                tmp.clear();
            }
            else{
                tmp+=s2[i];
            }
        }
        string x;
        sort(res1.begin(), res1.end());
        for(int i=1;i<res1.size();i++){
            if(res1[i]==res1[i-1]){
                res1.erase(res1.begin()+i);
                i--;
            }
        }
        for(int i=0;i<res1.size();i++){
            bool ok = false;
            for(int j=0;j<res2.size();j++){
                if(res1[i]==res2[j]){
                    ok=true;
                    break;
                }
            }
            if(!ok){
                x=res1[i];
                res.push_back(x);
            }
        }
        //cout<<res.size()<<endl;
        for(int i=0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
    }
    return 0;
}