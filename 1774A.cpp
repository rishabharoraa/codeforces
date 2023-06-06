#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	string s; cin >> s;

	int sum = s[0] - '0';

	string res = "";

	for(int i = 1; i < n; i++) {
		if(s[i] == '1') {
			if(sum == 0) {
				sum++; 
				res += "+";
			};
			else {
				sum--; 
				res += "-";
			};
		} else if(s[i] == "0") {
			res += "+";
		}
	}
}

int main() {
	int t; cin >> t;
	while(t--)
		solve();
}