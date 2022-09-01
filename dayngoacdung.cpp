#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, dem=0;

void Try(int i, string s, int open, int close){
    if(i==n){
        cout<<s<<endl;
        dem++;
    }
    if(open<(n/2)) Try(i+1, s+'(', open+1, close);
    if(open>close&&close<(n/2)) Try(i+1, s+')', open, close+1);
} 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    Try(1,"(", 1, 0);
    cout<<dem;
    return 0;
}