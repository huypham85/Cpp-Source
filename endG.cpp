#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s1;
string s;
string s2="";
int a[10004]={0};
int check[10004];
int n,dem=0;
void out(){
    for(int i=1;i<=n;i++){
        cout<<s2[a[i]-1];
    }
    cout<<"\n";
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(check[j]==0){
			a[i]=j;
			check[j]=1;
			if(i==n){
                out();
            }
			else Try(i+1);
			check[j]=0;
		}
	}
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>s1;
    for(int i=0;i<s1.size()-1;i++){
        if(s1[i]!='@'){
            s2.push_back(s1[i]);
            for(int j=i+1;j<s1.size();j++){
                if(s1[j]==s1[i]) s1[j]='@';
            }
        }
    }
    int len=s1.size()-1;
    if(s1[len]!='@') s2.push_back(s1[len]);
    sort(s2.begin(),s2.end());
    for(int i=0;i<10004;i++) check[i]=0;
    /*s2.push_back(s[0]);
    for(int i=1;i<s.size();i++){
        if(s2.back()!=s[i]) s2.push_back(s[i]);
    }*/
    //cout<<s2<<endl;
    n=s2.size();
    Try(1);
    //cout<<dem;
    return 0;
}