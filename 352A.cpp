#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int temp, f = 0, z = 0;
	for(int i = 0; i < n; i++) {
		cin >> temp;
		if(temp == 5) {
			f++;
		} else {
			z++;
		}
	}
	if(f < 9) {
		if(z == 0) {
			cout << -1 << endl;
		} else {
			cout << 0 << endl;	
		}
	} 
	else {
		if(z == 0) {
			cout << -1 << endl;
		} 
		else {
			for(int i = 0; i < 9*(floor(f / 9.0)); i++) {
				cout << 5;
			}
			for(int i = 0; i < z; i++) {
				cout << 0;
			}
			cout << endl;
		}
	}
}