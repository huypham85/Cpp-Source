#include<iostream>
#include<math.h>
using namespace std;
const int N = 1e6 + 5;
long long n;
int ngto_min[N];
// sang cac boi so cua i
void tim_uoc_nto_min(){
    for(int i = 1 ; i < N ; i++){
		ngto_min[i] = 0;
    	ngto_min[1] = 1;
    }
    for (int i = 2; i <  N ; i++){
        if (ngto_min[i] == 0){
            //ngto_min[i] = i;
            for (int j = i * 2;  j < N; j += i)
                if (ngto_min[j] == 0)
                    ngto_min[j] = i;
        }
    }
}
void input(){
    cin >> n;
}
 
void solve(){
    int dd=0;
    for(int i = 1; i <= n/2; i++){
        if(ngto_min[i]==0&&ngto_min[n-i]==0){
            dd=1;
            cout<<i<<" "<<n-i<<endl;
            break;
        }
    }
    if(dd==0) cout<<"-1"<<endl;
}
 
int main(){
    int t=1;
    cin>>t;
    tim_uoc_nto_min();
    while(t--){
        input();
        solve();
    }
    return 0;
}