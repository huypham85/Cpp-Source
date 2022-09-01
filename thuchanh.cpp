#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    /*int a=5;
    switch(a/2){
        case 1: a+=3;
        case 2: a-=3;
        case 3: a*=3;
    }
    cout<<a;*/

    /*int ch;
    for(int i=0,ch='A'; i<5;i++,ch++){
        putchar(ch);
    }*/

    /*int i, j;
    i=j=2;
    while(--i&&j++){
        cout<<i<<j;
    }*/

    int a=1;
    switch(a){
        case 1: a+=2;
        case 2: a-=2;
        default: a*=2;
    }
    cout<<a;
    return 0;
}