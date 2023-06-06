#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int u = 0;
	for(char c : s) {
		if(c >= 65 && c <= 90) {
			++u;
		}
	}
	if(s.size() - u < u) {
		// Uppercase
		transform(s.begin(), s.end(), s.begin(), ::toupper);
	} else {
		// Lowercase
		transform(s.begin(), s.end(), s.begin(), ::tolower);
	}
	cout << s << endl;
}