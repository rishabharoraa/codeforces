#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	ll x,n;
	cin >> n >> x;

	if(n == x) 
		return x;
	if(x > n) 
		return -1;

	ll l = n, h = 5e18;
	ll ans = -1;

	while(l <= r) {
		ll mid = (l+r)/2;
		ll val = andOperator(n, mid);
		
	}

}

ll andOperator(ll x, ll y)
{
    ll res = 0; // Initialize result
 
    while (x && y)
    {
        // Find positions of MSB in x and y
        int msb_p1 = msbPos(x);
        int msb_p2 = msbPos(y);
 
        // If positions are not same, return
        if (msb_p1 != msb_p2)
            break;
 
        // Add 2^msb_p1 to result
        ll msb_val =  (1 << msb_p1);
        res = res + msb_val;
 
        // subtract 2^msb_p1 from x and y.
        x = x - msb_val;
        y = y - msb_val;
    }
 
    return res;
}

int main() {
	ll t; cin >> t;
	while(t--)
		solve();
}