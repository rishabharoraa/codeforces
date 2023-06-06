#include<bits/stdc++.h>
using namespace std;

int main() {
	long long n,m; cin >> m >> n;
	long long temp;
	long long prev = 1;
	long long res = 0;
	for(int i = 0; i < n; i++) {
		cin >> temp;
		if(temp < prev) {
			res = res + ((m - prev) + temp);
		} else {
			res = res + (temp - prev);
		}
		prev = temp;
	}
	cout << res << endl;
}