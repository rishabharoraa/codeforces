#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
	for(int i = 2; i <= sqrt(x); i++) {
		if(x % i == 0) return false;
	}
	return true;
}

void solve(int n, int m) {
	for(int i = n+1; i < m; i++) {
		if(isPrime(i)) {
			cout << "NO" << endl;
			return;
		}
	}
	if(isPrime(m)) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	solve(n,m);
}