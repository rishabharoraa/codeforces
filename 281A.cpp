#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	if(s[0] >= 65 && s[0] <= 90) cout << s << endl;
	else {
		s[0] -= 32; cout << s << endl;
	}
}