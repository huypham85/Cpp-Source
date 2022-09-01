#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i=0;i<n;i++) cin >> a[i];

        vector<int> f(n);
        int res = 1;
        for (int i=0; i<n; i++) {
            f[i] = 0;
            for (int j=i-1; j>=0; j--) if (a[i] > a[j]) {
                f[i] = max(f[i], f[j]);
            }
            f[i] += 1;
            res = max(res, f[i]);
        }

        cout << res<<endl;
    }
    return 0;
}