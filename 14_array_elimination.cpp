#include <iostream>
#include <vector>

using namespace std;

#define lli long long int
const int inf = 1e9;
const int mod = 1e9 + 7;

#define rep(i, n) for(lli i = 0; i < n; i++)

int main() {
    lli t;
    cin >> t;
    while (t--) {
        lli n;
        cin >> n;
        vector<lli> a(n);
        rep(i, n)
            cin >> a[i];

        vector<lli> bitCount(30, 0);
        rep(i, n) {
            for (lli j = 0; j < 30; j++) {
                if ((a[i] & (1ll << j)) != 0)
                    bitCount[j]++;
            }
        }

        for (lli k = 1; k <= n; k++) {
            bool isDivisible = true;
            for (lli i = 0; i < 30; i++) {
                if (bitCount[i] % k != 0) {
                    isDivisible = false;
                    break;
                }
            }
            if (isDivisible)
                cout << k << " ";
        }
        cout << "\n";
    }
    return 0;
}
