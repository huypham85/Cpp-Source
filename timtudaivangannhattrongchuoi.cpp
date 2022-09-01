#include<bits/stdc++.h>
using namespace std;

int main() {
        vector<string> v;
        string s;
        getline(cin,s);
        s+=' ';
        string t;
        int maxx=-999999, minn=10000000;
        for(int i =0; i<s.size(); i++){
            if(s[i]!=' '){
                t+=s[i];
        	} 
			else{ 
                v.push_back(t);
                int len=t.size();
                maxx= max(len,maxx);
                minn= min(len,minn);
                t="";
            }
        }
        for(int i =0;i<v.size();i++){
            if(v[i].size()==maxx){
            	cout << v[i] << " ";
            	break;
			}
        }
        for(int i =0;i<v.size();i++){
            if(v[i].size()==minn){
            	cout << v[i] << endl;
            	break;
			}
        }
	return 0;
}
