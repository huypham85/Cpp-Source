#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string a;
    long count=0,tong=0;
    cin >> a;
    for(long i=0;i<a.size()-1;i++)
        if(a[i]==')'&&a[i+1]==')')
            count++;
    for(long i=0;i<a.size();i++)
    {
        if(a[i]=='('&&a[i+1]=='(')
            tong+=count;
        if(a[i]==')'&&a[i+1]==')')
            count--;
    }
    cout << tong;
    return 0;
}
