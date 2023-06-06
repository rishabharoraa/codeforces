#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m; cin >> n >> m;
	int mx = 0;
	int res = -1;
	for(int i = 0; i < n; i++) {
		double want; cin >> want;
		int turns = ceil(want / m);
		if(turns >= mx) {
			res = i + 1;
			mx = turns;
		}
	}
	cout << res << endl;
}