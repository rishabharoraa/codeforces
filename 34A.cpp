#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> v;
	for(int i = 0; i < n; i++) {
		int temp; cin >> temp;
		v.push_back(temp);
	}
	int mn = INT_MAX;
	int mni = -1;
	for(int i = 0; i < n; i++) {
		// cout << i+1%n << " " << i << endl;
		if(abs(v[(i+1)%n] - v[i]) < mn) {
			mn = abs(v[(i+1)%n] - v[i]);
			mni = i;
		}
	}
	cout << mni+1 << " " << ((mni+1)%n)+1 << endl;
}