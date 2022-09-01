#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
  string s;
  while(cin >> s){
    int dem = 0;
    int a[26] = {0};
    for(int i=0;i<s.size();i++){
      a[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
      if(a[i]%2==1) 
	  dem++;
    }
    if(dem<2 || dem%2 == 1) 
		cout << "First"<<endl;
    else 
		cout << "Second"<<endl;
  }
  return 0;
}
