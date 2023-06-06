#include <bits/stdc++.h>
using namespace std;

int main() {
	int friends; cin >> friends;
	int numberOfFingers = 0;
	int temp;
	int soln = 0;
	for(int i = 0; i < friends; i++) {
		cin >> temp;
		numberOfFingers += temp;
	}
	for(int i = 1; i <= 5; i++) {
		if((numberOfFingers + i) % (friends + 1) != 1) {
			soln++;
		}
	}
	cout << soln << endl;
}