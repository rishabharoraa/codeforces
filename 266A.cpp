#include <bits/stdc++.h>
using namespace std;

int main() {
	int a; string s;
	cin >> a >> s;
	int res = 0;
	for(int i = 0; i < a - 1; i++) {
		char c = s[i];
		int temp = 0;
		for(int j = i + 1; j < a; j++) {
			if(s[j] == c) {
				temp++;
			} else {
				break;
			}
		}
		res += temp;
		i += temp;
	}
	cout << res << endl;
}