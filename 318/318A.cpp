#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n,k; cin >> n >> k;
	if(k > (n + 1) / 2) {
		//even
		cout << (k - ((n+1	) / 2)) * 2 << endl;
	} else {
		cout << (k * 2) - 1 << endl;
	}
}