#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int temp;
	bool isDup = false;
	int mn = INT_MAX;
	int mni = -1;
	for(int i = 0; i < n; i++) {
		cin >> temp;
		if(temp < mn) {
			isDup = false;
			mn = temp;
			mni = i + 1;
		} else if(temp == mn) {
			isDup = true;
		}
	}
	if(isDup) {
		cout << "Still Rozdil" << endl;
	} else {
		cout << mni << endl;
	}
}