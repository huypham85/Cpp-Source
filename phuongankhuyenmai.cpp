#include <iostream>
using namespace std;
int test,i,k,m,n;
void xuli(){
    if ((n<=145) && (m<=180-n) && (k<=900-m-n)){
            cout<<"YES"<<endl;
            return;
        }
    cout<<"NO"<<endl;
}
int main(){
    cin>>test;
    for (i=1; i<=test; i++){
        cin>>n>>m>>k;
        xuli();
    }
}

