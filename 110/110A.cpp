#include<bits/stdc++.h>
using namespace std;

void solve(string s) {
	int res = 0;
	for(char c : s) {
		if(c == '4' || c == '7') res++;
	}
	if(res == 0) {
		cout << "NO" << endl;
		return;
	}
	while(res > 0) {
		int temp = res % 10;
		if(temp != 4 && temp != 7) {
			cout << "NO" << endl;
			return;
		}
		res /= 10;
	}
	cout << "YES" << endl;
}

int main() {
	string s;
	cin >> s;
	solve(s);
}