#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
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

    cout << res;
    return 0;
}