#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int i,d=0,dem=0,j;
    vector<int>vt(10),a(10);
    for(i=0;i<10;i++)
        cin>>vt[i];
    for(i=0;i<10;i++)
        a[i]=vt[i]%42;
    i=0;
    while(i<9){
        d=0;
        for(j=i+1;j<10;j++){
            if(a[i]!=a[j])
                d++;
            else i++;
        }
        if(d==9-i) dem++;
        i++;
    }
    cout<<dem;
    return 0;
}
