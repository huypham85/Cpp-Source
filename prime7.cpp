#include<iostream>
#include<math.h>
using namespace std;
long long n;
void input(){
    cin >> n;
}
void solve(){
    int dem = 0;
    int check = 0;
    for(int i = 2 ; i <= sqrt(n) ; i++){
        if ( n % i == 0 ){
            dem++;
            int dem1 = 0; 
            while(n % i == 0){
                dem1++;
                n/=i;
            }
            if( dem1 > 1 ){
                check = 1;
                break;
            }
        }
    }
    if ( n > 1 ) dem ++;
    if ( dem == 3 && check == 0) cout << 1 << endl;
    else cout << 0 << endl;
}
int main(){
    int t=1;
    cin>>t;
    while(t--){
        input();
        solve();
    }
    return 0;
}