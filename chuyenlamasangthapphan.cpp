#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[20], i = 0, j, k;
    string lm;
    cin>>lm;
    for(i = 0; i < lm.size(); i++){
        if(lm[i] == 'I')
            a[i] = 1;
        else if(lm[i] == 'V')
            a[i] = 5;
        else if(lm[i] == 'X')
            a[i] = 10;
        else if(lm[i] == 'L')
            a[i] = 50;
        else if(lm[i] == 'C')
            a[i] = 100;
        else if(lm[i] == 'D')
            a[i] = 500;
        else if(lm[i] == 'M')
            a[i] = 1000;
    }
    k = a[lm.size()-1];
    for(i = lm.size()-1; i > 0; i--){
        if(a[i] > a[i-1])
            k = k - a[i-1];
        else if(a[i] == a[i-1] || a[i] < a[i-1])
            k = k + a[i-1];
    }
    cout<<k;
	return 0;
}

