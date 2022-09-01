#include <bits/stdc++.h> 
typedef long long int ll;
using namespace std;
int a[1000006];  
ll res=0; 
void Solve(int n) { 	
    while (n % 2 == 0){   
        res+=2;
        n = n/2;          
    }     
    for (int i = 3; i <= n; i = i + 2) {  
        while (n % i == 0){  
            res+=i; 
            n = n/i;              
        }  
    }                  
}  

int main(){  
	int n;
    cin>>n;
	for(int i=0;i<n;i++){
        cin>>a[i]; Solve(a[i]);
    }	
    cout<<res;
}
