#include <iostream>
using namespace std;
long long n;
void tinh(){
    cin>>n;
    long long dem=1;
    for (long long i= 2*n-1;i>n;i--)
        if (((long long)i*n)%(i-n)==0)
            dem+=2;
    cout<<dem<<endl;
}
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
        tinh();
    return 0;
}

