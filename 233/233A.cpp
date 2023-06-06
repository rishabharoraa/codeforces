#include<bits/stdc++.h>
using namespace std;

void solve(int n) {
	if(n % 2 == 1) {
		cout << -1 << endl;
		return;
	}
	for(int i = 0; i < n; i++) {
		if(i%2 == 0) {
			cout << i + 2 << " ";
		} else {
			cout << i << " ";
		}
	}
	cout << endl;
}

int main() {
	int n; cin >> n;
	solve(n);
}