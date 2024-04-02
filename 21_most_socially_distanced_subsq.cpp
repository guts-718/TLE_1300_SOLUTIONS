// local maxima and local minima ko hi include krna hai bs
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
 
	ll t;
	cin >> t;
 
	while (t--) {
 
		ll n;
		cin >> n;
 
		ll a[n + 2];
		for (ll i = 1; i <= n; i++) {
			cin >> a[i];
		}
 
		//ll sum = 0;
		ll last = 1;   // +ive
		// last =0 // -ve
		vector<ll> v;
		v.push_back(a[1]);
		for (ll i = 2; i <= n; i++) {
			if (last == 1 && a[i] - a[i - 1] >= 0) {
				continue;
			} else if (last == 1 && a[i] - a[i - 1] < 0) {
				last = 0;
				if (i != 2)
					v.push_back(a[i - 1]);
			} else if (last == 0 && (a[i] - a[i - 1]) >= 0) {
				last = 1;
				v.push_back(a[i - 1]);
			} else {
				continue;
			}
		}
		v.push_back(a[n]);
 
		cout << v.size() << "\n";
		for (ll i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		} cout << "\n";
 
	}
 
 
	return 0;
}