

#include <iostream>
#include <time.h>
#include <fstream>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

// #define cin ifs
#define FOR(i,l,r) for(int i = l; i <= r; i++)
#define FORi(i,l,r,incre) for(int i = l; i <= r; i += incre)
#define _FOR(i,r,l) for(int i = r; i >= l; i--)
#define _FORi(i,r,l,incre) for(int i = r; i >= l; i -= incre)

typedef long long ll;

// ifstream ifs("input.txt");

string text, val;
int nTest, r, c, pos;
int ma[22][22];

void inp();
void setValue(string a); // string to binary, get value into val
string CtB(char a); // char to binary
void build(); // build matrix
void outp();

int main() {
	cin >> nTest;
	while (nTest--) {
		inp();
		setValue(text);
		build();
		outp();
	}
	// ifs.close();
	return 0;
}

void inp() {
	cin >> r >> c;
	cin.ignore();
	getline(cin, text);
}

void setValue(string a) {
	val = "";
	FOR(i, 0, a.length() - 1) {
		if (a[i] == ' ') {
			val += "00000";
		}
		else val += CtB(a[i]);
	}
}

string CtB(char a) {
	string t = "";
	int n = (int)(a - 64);
	while (n != 0) {
		t = (char)(n % 2 + 48) + t;
		n /= 2;
	}
	while (t.length() < 5) t = '0' + t;
	return t;
}

void build() {
	fill(ma[0], ma[r-1] + c, 0);
	pos = 0;
	int t = 0, row = r - 1, col = c - 1, l = val.length();
	while (true) {
		FOR(i, t, col) {
			if (pos < l) ma[t][i] = (int)(val[pos++] - 48);
		}
		FOR(i, t + 1, row) {
			if (pos < l) ma[i][col] = (int)(val[pos++] - 48);
		}
		_FOR(i, col - 1, t) {
			if (pos < l) ma[row][i] = (int)(val[pos++] - 48);
		}
		_FOR(i, row - 1, t + 1) {
			if (pos < l) ma[i][t] = (int)(val[pos++] - 48);
		}
		if (pos >= l) break;
		t++; row--; col--;
	}
}

void outp() {
	static int cnt = 1;
	cout << cnt++ << " ";
	FOR(i, 0, r - 1) {
		FOR(j, 0, c - 1) cout << ma[i][j];
	}
	cout << "\n";
}
