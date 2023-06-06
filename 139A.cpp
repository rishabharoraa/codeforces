#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> v;

	int temp;
	for(int i = 0; i < 7; i++) {
		cin >> temp;
		v.push_back(temp);
	}

	int idx = 0;
	while(n > 0) {
		n -= v[idx];
		if(n <= 0) {
			cout << idx + 1 << endl;
			break;
		}
		idx = (idx + 1) % 7;
	}
}