#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a,b;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>a>>b;
    if(a<=b){
        for(int i=0;i<a;i++){
            cout<<char('A'+i);
            int dem=0;
            for(int j=i+1;j<b;j++){
                cout<<char('A'+j);
                dem++;
            }
            //cout<<dem<<endl;
            if(dem+1<b){
                for(int j=0;j<b-dem-1;j++){
                    cout<<char('A'+b-dem-2-j);
                }
            }
            cout<<endl;
        }
    }
    else{
        vector<char>tmp;
        for(int i=0;i<a;i++){
            if(i<b){
                if(i==b-1) tmp.push_back(char('A'+i));
                cout<<char('A'+i);
                int dem=0;
                for(int j=i+1;j<b;j++){
                    if(i==b-1) tmp.push_back(char('A'+j));
                    cout<<char('A'+j);
                    dem++;
                }
                if(dem<b){
                    for(int j=0;j<b-dem-1;j++){
                        if(i==b-1) tmp.push_back(char('A'+b-dem-2-j));
                        cout<<char('A'+b-dem-2-j);
                    }
                }
                cout<<endl;
            }
            else
            {
                int len=a-b;
                //cout<<len<<endl;
                while (len--)
                {
                    for (int i = 0; i < tmp.size(); i++)
                    {
                        cout<<tmp[i];
                    }
                    cout<<endl;
                }
                break;
            }
        }
    }
    return 0;
}