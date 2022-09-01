#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        //phan tinh ra cac thua so giai thua . vi du: 4!= 3!*2!*2!
        int n;
        string s;
        cin>>n;
        cin>>s;
        int a[20]={0};
        for(int i=0;i<n;i++){
            if(s[i]=='2') a[2]++;
            if(s[i]=='3') a[3]++;
            if(s[i]=='4'){
                a[3]++;
                a[2]+=2;
            }
            if(s[i]=='5'){
                a[5]++;
                //a[2]+=2;
            }
            if(s[i]=='6'){
                a[3]++;
                a[5]++;
            }
            if(s[i]=='7'){
                a[7]++;
            }
            if(s[i]=='8'){
                a[7]++;
                a[2]+=3;
            }
            if(s[i]=='9'){
                a[7]++;
                a[3]+=2;
                a[2]++;
            }
        }
        for(int i=10;i>=0;i--){
            if(a[i]){
                while(a[i]){
                    cout<<i;
                    a[i]--;
                }
            }
        }
        cout<<endl;
    }
    
    return 0;
}