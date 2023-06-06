#include <bits/stdc++.h>
using namespace std;

int main() {
	long n; cin >> n;
	double phi = (1 + sqrt(5)) / 2;
	cout << 0 << " " << (long)round(n / phi) << " " << (long)round(n / (phi*phi)) << endl;
}