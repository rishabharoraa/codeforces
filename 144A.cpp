#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> a(n, 0);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	bool isSorted = true;
	int res = 0;
	for(int j = 0; j < n - 1; j++) {
		
	}
	for(int i = 0; i < n - 1; i++) {
		if(a[i] < a[i+1]) {
			isSorted = false;
			int temp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = temp;
			res++;
		}
	}
}