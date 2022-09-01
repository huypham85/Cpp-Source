#include<bits/stdc++.h>
using namespace std;

long long timTich(int n){
    if (n >= 0 && n <= 9)
        return n;
    stack<int> digits;
    for (int i=9; i>=2 && n > 1; i--){
        while (n % i == 0){
            digits.push(i);
            n = n / i;
        }
    }
    
    if (n != 1)
        return -1;
    long long int k = 0;
    while (!digits.empty()){
        k = k*10 + digits.top();
        digits.pop();
    }
    return k;
}
 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<timTich(n);
        cout<<endl;
    }
    return 0;
}