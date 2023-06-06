#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k; cin >> n >> k;
	string s = bitset<128>(n).to_string();
	s = s.substr(s.size() - k);
	int x = 0;
	for(char c: s) {
		if(c == '1') {
			break;
		} x++;
	}
	int res = s.size() - x;
	cout << pow(2, res) + 1 << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();
}