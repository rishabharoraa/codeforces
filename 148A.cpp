#include<bits/stdc++.h>
using namespace std;

int solve() {
	vector<int> a(4);
	int d;
	for(int i = 0; i < 4; i++) {
		cin >> a[i];
	} 
	cin >> d;
	vector<bool> dragonStatus(d, false);
	for(int n: a) {
		if(n == 1) return d;
	}
	for(int n: a) {
		for(int i = n-1; i < d; i += n) {
			dragonStatus[i] = true;
		}
	}
	int res = 0;
	for(int i = 0; i < d; i++) {
		if(dragonStatus[i]) ++res;
	}
	return res;
}

int main() {
	cout << solve() << endl;
}