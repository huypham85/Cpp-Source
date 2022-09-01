#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int n=3;
    ofstream of;
    of.open("tmp.txt");
    string s;
    for(int i=1;i<=n;i++){
        getline(cin, s);
        of<<s<<endl;
    }
    of.close();
    ifstream input;
    ofstream ouput;
    string a;
    input.open("tmp.txt");
    ouput.open("tmp2.txt");
    while(!input.eof()){
        //input >> a;
        getline(input, a);
        ouput << a;
        ouput <<endl;
    }
    input.close();
    ouput.close();
    return 0;
}