#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int b[5001] = {0};
    int a;
    for (int i=0; i<n; i++){
        cin>>a;
        b[a] = 1;
    }
    int count = 0;
    for (int i=1; i<=n; i++)
        if (b[i]==0)
            count++;
    cout<<count;
    return 0;
}

