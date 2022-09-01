
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
#define FOR(i,l,r) for(int i = l; i <= r; i++)
#define _FOR(i,r,l) for(int i = r; i >= l; i--)
int n, pos;
string num[102];
string temp;
string res[502]; // store num

void inp();
void getNum(); // get number from string
void handleRes(); // print result
int comp(string a, string b);
inline string standardized(string a);
void solve();

int main() {
	solve();
	return 0;
}

void solve() {
	inp();
	getNum();
	handleRes();
}

void inp() {
	cin >> n;
	cin.ignore();
	FOR(i, 1, n) cin >> num[i];
}

void getNum() {
	pos = 1; temp = "";
	FOR(i, 1, n) {
		FOR(j, 0, num[i].length() - 1) {
			if (num[i][j] >= '0' && num[i][j] <= '9') {
				temp = temp + num[i][j];
				if (num[i][j + 1] < 0 || num[i][j + 1] >'9' || j == (num[i].length() - 1)) {
					res[pos] = standardized(temp);
					pos++;
					temp = "";
				}
			}
		}
	}
}

int comp(string a, string b) {
	int l1 = a.length();
	int l2 = b.length();
	if (l1 > l2) return 0;
	if (l1 < l2) return 1;
	if (a > b) return 0;
	return 1;
}

inline string standardized(string a) { return (a[0] == '0' && a.length() != 1) ? standardized(a.erase(0, 1)) : a; }

void handleRes() {
	sort(res + 1, res + pos, comp);
	FOR(i, 1, pos - 1) {
		cout << res[i] << "\n";
	}
}
