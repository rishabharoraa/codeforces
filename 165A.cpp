#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<pair<int,int>> coordinates;

	map<int, pair<int,int>> rows;
	map<int, pair<int,int>> cols;

	int x, y;
	int res = 0;

	for(int i = 0; i < n; i++) {
		cin >> x >> y;
		coordinates.push_back(make_pair(x,y));
		if(rows.find(x) == rows.end()) { // == null
			rows[x] = make_pair(y, INT_MIN);
		} 
		else if(rows[x].second == INT_MIN) {
			rows[x] = make_pair(min(rows[x].first, y), max(rows[x].first, y));
		}
		else {
			rows[x].first = min(rows[x].first, y);
			rows[x].second = max(rows[x].second, y);
		}

		if(cols.find(y) == cols.end()) { // == null
			cols[y] = make_pair(x, INT_MIN);
		} 
		else if(cols[y].second == INT_MIN) {
			cols[y] = make_pair(min(cols[y].first, x), max(cols[y].first, x));
		}
		else {
			cols[y].first = min(cols[y].first, x);
			cols[y].second = max(cols[y].second, x);
		}
	}
	for(int i = 0; i < n; i++) {
		bool hasRows = false, hasCols = false;
		pair<int, int> point = coordinates[i];
		int x = point.first, y = point.second;
		hasRows = rows.find(x) != rows.end() && rows[x].second != INT_MIN && rows[x].first < y && rows[x].second > y;
		hasCols = cols.find(y) != cols.end() && cols[y].second != INT_MIN && cols[y].first < x && cols[y].second > x;
		if(hasCols && hasRows) res++;
	}
	cout << res << endl;
}