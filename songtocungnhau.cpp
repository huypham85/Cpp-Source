#include <iostream>
#include <math.h>
using namespace std;

int ucln(int a, int b){
    while (b!=0){
        int x = a%b;
        a = b;
        b = x;
    }
    return a;
}
int ktra(int x){
    if (x<2)
        return 0;
    for (int i=2; i<=sqrt(x); i++)
        if (x%i==0)
            return 0;
    return 1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int dem = 0;
        for (int i=1; i<=x; i++){
            if (ucln(i,x)==1)
                dem++;
        }
        if(ktra(dem)==1)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0;
}
