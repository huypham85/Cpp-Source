#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int t,k;
string s;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while (t--)
    {
        cin>>k>>s;
        for(int i=0;i<s.size();i++){
            char maxx=s[s.size()-1];
            int index=s.size()-1;
            //tim so lon nhat sau vi tri i
            for(int j=index;j>i&&k>0;j--){
                if(maxx<s[j]){
                    maxx=s[j];
                    index=j;
                }
            }
            if(maxx>s[i]&&k>0){
                swap(s[i],s[index]);
                k--;
            }
        }
        cout<<s<<endl;
    }
        
    
    return 0;
}