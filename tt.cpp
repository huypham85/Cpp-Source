#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    vector<int>a(3);
    for(int i=0;i<3;i++)
    	cin>>a[i];
    int x= a.find(a.begin(), a.end(), 10);
    cout<<x;
    
	return 0;
}

