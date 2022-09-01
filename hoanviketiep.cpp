#include<bits/stdc++.h>

using namespace std;
int t, i,stt,j;
string s;

void Try(){
	cin>>stt>>s;
	for(i=s.size()-2;i>=0;i--){
		if(s[i]<s[i+1]){
			for(j=s.size()-1;j>=i;j--){
				if(s[j]>s[i]){
					swap(s[j], s[i]);
					int l=i+1,r=s.size()-1; 
					while(l<r){
						swap(s[l], s[r]);
						l++;
						r--;	
					}
					cout<<stt<<" "<<s<<'\n';
					return;
				}
			}
		}
		else if(i==0){
			cout<<stt<<" "<<"BIGGEST"<<'\n';
		}		
	}
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
	cin>>t;
	for(int u=1;u<=t;u++){
		Try();
	}
	return 0;
}

