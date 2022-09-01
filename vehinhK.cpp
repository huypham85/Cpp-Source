#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char a[100][100];
int n;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int value = 65;
    int space=-1;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=space+1;j<n;j++){
            a[j][i]=value;
            value++;
        }
        space++;
    }
    int index=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=index;j++){
            cout << a[i][j]<<" ";        
        }
        cout<<endl;
        index++;
    }
    return 0;
}