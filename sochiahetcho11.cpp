#include<bits/stdc++.h>
using namespace std;
 

bool check(string str)
{
    int n = str.length();
    int oddDigSum = 0, evenDigSum = 0;
    for (int i=0; i<n; i++)
    {
        if (i%2 == 0)
            oddDigSum += (str[i]-'0');
        else
            evenDigSum += (str[i]-'0');
    }
 
    return ((oddDigSum - evenDigSum) % 11 == 0);
}
 
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        cin>>s;
        if(check(s)) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
    
    return 0;
}