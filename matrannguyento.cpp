#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[1000][1000];
int n;
bool check(int x){
    if(x<2) return false;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0) return false;
    }
    return true;
}
void out(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    int dd=0;
    int value=1, hang=n-1, cot=n-1;
    while(dd<=(n/2)){
        for(int i=dd;i<=cot;i++){
            if(check(value)==true){
                a[dd][i]==value;
                value++;
            }
            else{
                while(check(value)==false) value++;
                a[dd][i]=value;
                value++;
            }
        }
        //out();
        for(int i=dd+1;i<=hang;i++){
            if(check(value)==true){
                a[i][hang]==value;
                value++;
            }
            else{
                while(check(value)==false) value++;
                a[i][hang]=value;
                value++;
            }
        }
        //out();
        for(int i=cot-1;i>=dd;i--){
            if(check(value)==true){
                a[hang][i]==value;
                value++;
            }
            else{
                while(check(value)==false) value++;
                a[hang][i]=value;
                value++;
            }
        }
        //out();
        for(int i=hang-1;i>=dd+1;i--){
            if(check(value)==true){
                a[i][dd]==value;
                value++;
            }
            else{
                while(check(value)==false) value++;
                a[i][dd]=value;
                value++;
            }
        }
        //out();
        dd++;
        hang--;
        cot--;
    }
    a[0][1]=3;
    out();
    
    return 0;
}