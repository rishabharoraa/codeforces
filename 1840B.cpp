#include <iostream>
#include <bitset>
#include <cmath>
#include <algorithm>
using namespace std;

void solve() {
	int n, k; cin >> n >> k;
	k = min(k, 30);
	cout << min(n, (1 << k) - 1) + 1 << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();
}