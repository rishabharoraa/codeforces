#include<bits/stdc++.h>
using namespace std;

void solve(int n) {
	vector<int> a(n), b(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
	}
	int sum1 = 0, sum2 = 0;
	for(int n: a) sum1 += n;
	for(int n: b) sum2 += n;
	cout << min(sum1, n - sum1) + min(sum2, n - sum2) << endl;
}

int main() {
	int n; cin >> n;
	solve(n);
}