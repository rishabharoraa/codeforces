#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	string s; 
	cin >> n >> s;
	string res = "";
	int i = 0;
	int j = 1;
	while(j < n) {
		if(s[i] == s[j]) {
			res += s[j];
			i = j + 1;
			j = i + 1;
		} else {
			j++;
		}
	}
	cout << res << endl;
}

int main() {
	int n; cin >> n;
	while(n--) solve();
}