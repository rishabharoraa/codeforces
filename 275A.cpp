#include<bits/stdc++.h>
using namespace std;

int a[5][5] = {0};

int main() {
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cin >> a[i+1][j+1]; 
		}
	}

	for(int i = 1; i < 4; i++) {
		for(int j = 1; j < 4; j++) {
			int sum = a[i][j-1] + a[i][j+1] + a[i][j] + a[i+1][j] + a[i-1][j];
			if(sum % 2 == 0) {
				cout << "1";
			} else {
				cout << "0";
			}
		} cout << endl;
	}
}