#include<bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	vector<char> v;
	for(char c: s) {
		if(c == '+') continue;
		v.push_back(c);
	}
	sort(v.begin(),v.end());
	string res = "";
	for(char c: v) {
		res = res + c + "+";
	}
	cout << res.substr(0,res.size()-1) << endl;
}